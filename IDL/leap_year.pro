;本程序实现判断输入年份平年或者闰年，编程人员：李涛，学号：3130507103
function leap_year,year
  if ((year mod 4) eq 0) and ((year mod 100) ne 0) and ((year mod 400) eq 0) then begin
    print,'这是一个闰年！'
  endif else begin
    print,'这是一个平年！'
  endelse
  return,0
end