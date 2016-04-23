pro test
  window,1
  y=findgen(100)
  for x=0,99 do begin
    plot,y,6*x^2+8*x-3
  endfor
end