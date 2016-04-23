;本程序实现输出100~200之间的所有素数。编程人员：李涛，学号：3130507103
pro lt03_pro
  ivar=indgen(100)+100
  column=0;列计数器
  row=0;行计数器
  a=intarr(5,5)
  for ivar=101,200,1 do begin;遍历数字
    ;选区满足条件的数字
    for m=2,ivar,1 do begin
      if (ivar mod m) eq 0 then break
    endfor
    ;将满足条件的数字存入数组
    if (m eq ivar) then begin
      a[column,row]=ivar
      column++
    endif
    if column eq 5 then begin
      column=0
      row++
    endif
  endfor
  print,a;打印结果
end