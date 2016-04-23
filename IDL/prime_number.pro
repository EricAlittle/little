pro Prime_number
  Print,'请输入一个整数->'
  Read,number
  flag=0
  If number Lt 1 Then Begin
    Print,'素数不小于1'
  Endif Else Begin
    For i=3,(number-1) Do Begin
      If number Mod i Eq 0 Then Begin
        flag=1
      Endif
    Endfor
    If flag Eq 1 Then Begin
      Print,'合数'
    Endif Else Begin
      Print,'素数'
    Endelse
  Endelse
End