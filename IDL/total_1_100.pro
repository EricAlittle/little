;本程序实现1到100的累加运算。编程人员：李涛，学号：3130507103
pro total_1_100
  arr=indgen(100)+1;创建1~100的数组
  print,fix(total(arr));计算结果
end