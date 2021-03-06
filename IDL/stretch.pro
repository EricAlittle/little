FUNCTION LINEAR2, inImage,inPer
  COMPILE_OPT idl2
  ;
  IF N_ELEMENTS(inPer) EQ 0 THEN inPer = 0.02
  sz = SIZE(inImage)
  ;图像太大的话统计太慢，模仿ENVI，仅对Scroll窗口进行统计，默认大小是256*256
  IF sz[0] EQ 2 THEN BEGIN
    image = CONGRID(inImage, 256, 256)
  ENDIF ELSE BEGIN
    image = CONGRID(inImage, sz[1], 256, 256)
  ENDELSE
  ;图像基本信息
  sz = SIZE(image)
  IF sz[0] EQ 2 THEN BEGIN
    nPlanes = 1
    x = sz[1]
    y = sz[2]
  ENDIF ELSE BEGIN
    nPlanes = 3
    x = sz[2]
    y = sz[3]
  ENDELSE
  outImage = inImage
  FOR i=0, nPlanes-1 DO BEGIN
    IF nPlanes EQ 3 THEN img = REFORM(image[i,*,*]) ELSE img=image
    ;直方图统计
    array = HISTOGRAM(img,oMax = maxV,oMin = minV)
    arrnumb= N_ELEMENTS(array)
    ;
    percent = TOTAL(array,/CUMULATIVE)/TOTAL(array)
    idx1 = WHERE(percent LE inPer)
    idx2 = WHERE(percent GE inPer)
    number = N_ELEMENTS(idx1)
    ;计算当前inpert对应的数值 （2%）
    ;两个索引，取临近索引
    curIdx = (ABS(percent[idx1[number-1]]-inPer) LE ABS(percent[idx2[0]]-inPer))? idx1[number-1]:idx2[0]
    minvalue = minV +(maxV-minV)*curIdx/(arrnumb-1)
    ;1-inper对应数值 （98%）
    idx1 = WHERE(percent LE (1-inPer))
    idx2 = WHERE(percent GE (1-inPer))
    number = N_ELEMENTS(idx1)
    ;两个索引，取临近索引
    curIdx = (ABS(percent[idx1[number-1]]-1+inPer) LE ABS(percent[idx2[0]]-1+inPer))? idx1[number-1]:idx2[0]
    maxvalue = minV +(maxV-minV)*curIdx/(arrnumb-1)
    ;单波段还是多波段
    IF nPlanes EQ 3 THEN $
      outImage[i,*,*] = BYTSCL(outImage[i,*,*], max=maxvalue, min=minvalue) $
    ELSE outImage = BYTSCL(outImage, max=maxvalue, min=minvalue)
  ENDFOR
  IF nPlanes EQ 1 THEN outImage = REFORM(outImage)
  RETURN, outImage
END