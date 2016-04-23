;本程序实现判断处于何种年龄段，编程人员：李涛，学号：3130507103
pro lt03_fun02
  read,age
  case age gt 0 of
    age le 10:print,'小孩'
    age gt 10 and age le 24:print,'少年'
    age gt 24 and age le 30:print,'青年'
    age gt 30 and age le 50:print,'中年'
    else:print,'老年'
  endcase
end