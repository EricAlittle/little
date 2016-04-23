;本程序实现计算二分之PI的值。编程人员：李涛，学号：3130507103
;pro two_pi
  t1=systime(1);程序开始时间
  counter=0;计数器
  n=1.0d
  pi=1.0d
  a=10d
  b=1.0d
  while a-b gt 1e-6 do begin
    a=(2*n)/(2*n-1);计算pi的前一项
    b=(2*n)/(2*n+1);计算pi的后一项
    pi=pi*a*b;重复计算pi
    n++
    counter++
  endwhile
  t2=systime(1);程序结束时间
  print,pi,counter,t2-t1;打印结果
;end