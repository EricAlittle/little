Pro Student
  Print,'请输入班级人数->'
  Read,count
  student1={student,xh:long64(0),xm:string(''),pscj:0.0,qmcj:0.0}
  struct_studentarr=replicate({student},count)
  for i=0,(count-1) do begin
    print,'请输入第',(i+1),'序号同学的学号'
    read,a
    struct_studentarr(i).xh=a
    print,'请输入第',(i+1),'序号同学的姓名'
    b=''
    read,b
    struct_studentarr(i).xm=b
    print,'请输入第',(i+1),'序号同学的平时成绩'
    read,c
    struct_studentarr(i).pscj=c
    print,'请输入第',(i+1),'序号同学的期末成绩'
    read,d
    struct_studentarr(i).qmcj=d
  endfor
  print,'请输入想知道成绩的学生序号'
  read,e
  print,struct_studentarr(e-1).xm,'的平时成绩为',struct_studentarr(e-1).pscj
  print,struct_studentarr(e-1).xm,'的期末成绩为',struct_studentarr(e-1).qmcj
End
