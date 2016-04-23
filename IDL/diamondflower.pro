pro diamondFlower
  print,'请输入要创建的菱形花的行数'
  strarr=[[number],[number]]
  for i=0,number do begin
    for x=(i+1),number do begin
      print,' '
    endfor
    for y=0,((I+1)*2-1) do begin
      print,'*'
    endfor
    print,''
  endfor
end
