Pro  Fortwotime
  Print,'请输入a'
  Read,a
  Print,'请输入b'
  Read,b
  Print,'请输入c'
  Read,c
    delta=b*b-4*a*c
    If delta Ge 0 Then Begin
      result1=(-b+Sqrt(delta))/(2*a)
      result2=(-b-Sqrt(delta))/(2*a)
      Print,'x1='+String(result1)
      Print,'x2='+String(result2)
    Endif Else Begin
      Print,'Delta小于零，方程无实根！'
    Endelse
End