;本程序实现读取学生成绩的ASCII码文件，输出期末综合成绩
pro read_ascii
  asciifile=dialog_pickfile(title='Open File')
  openr,lun,asciifile,/get_lun
  txtlines=file_lines(asciifile);拿到文件的行数
  arr=transpose(replicate(" ",txtlines));定义一个和行数一样的一维数组
  readf,lun,arr;读取文件，将数据每一行存入数组
  free_lun,lun;关闭文件
  name=transpose(replicate(" ",txtlines));定义存储名字的数组，转置成列，加快运行速度
  regular_score=transpose(replicate(' ',txtlines));定义平时成绩的数组
  end_score=transpose(replicate(' ',txtlines));定义期末成绩的数组
  ;解析字符串，其中->一个制表符是一个字符
  for i=1,(txtlines-1) do begin
    name[i-1]=strmid(arr[i],3,6)
    regular_score[i-1]=strmid(arr[i],10,2)
    end_score[i-1]=strmid(arr[i],14)
  endfor
  regscore=float(regular_score);将字符数组转换成浮点型数组，为了后面的计算
  escore=float(end_score)
  score=0.3*regscore+0.7*escore;计算总和成绩
  for j=0,(txtlines-2) do begin
    print,name[j]+'   '+'->'+string(score[j])
    ;print,name[j]+string(0.7*float(end_score[j])+0.3*float(regular_score[j]))
  endfor
  ;print,arr
  ;print, arr[0],arr[1] 
end