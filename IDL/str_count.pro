;本程序实现任意输入字符串，统计字母、数字、空格个数
pro str_count
  str=' '
  print,'输入字符串->'
  read,str
  arr=byte(str);将字符串转化为ASCII
  count_str=0;定义字符的计数器
  count_spa=0;定义空格的计数器
  count_num=0;定义数字的计数器
  ;遍历数组，判断个数
  for i=0,(n_elements(arr)-1),1 do begin
    if arr[i] eq 32 then count_spa+=1
    if arr[i] ge 48 && arr[i] le 57 then count_num+=1
    if arr[i] ge 65 && arr[i] le 90 || arr[i] ge 97 && arr[i] le 122 then count_str+=1
  endfor 
  print,'空格的数量->'+string(count_spa)
  print,'字符的数量->'+string(count_str)
  print,'数字的数量->'+string(count_num)
  ;result=[[count_str],[count_num],[count_spa]]
  ;return,result
end