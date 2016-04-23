;本程序实现云掩膜处理
pro LT03RwImage
  FName=dialog_read_image(title='Open image',image=img,query=image_info,file=file)
  imglt180=fix(img) lt 180;提取判断为云的像元，二值化图像
  resultimg=img*imglt180;掩膜处理
  filepath=dialog_write_image(resultimg,filename=fn,type='tif') 
end