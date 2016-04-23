;本程序实现统计4X5数组的平均数，方差，标准差，总和的计算。编程人员：李涛，学号：3130507103
pro array_count
  arr=[[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20]];创建数组
  print,'平均数'+string(mean(arr));打印平均数
  print,'方差'+string(variance(arr));打印方差
  print,'标准差'+string(stddev(arr));打印标准差
  print,'总和'+string(total(arr));打印总和
end