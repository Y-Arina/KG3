#include "colors.inc"   
#include "1.inc"     
#include "2.inc"
#include "3.inc"

background{   //цвет заднего фона
    rgb<0.8,1,1>
}    

camera {               
    angle 80  //угол обзора камеры 80 градусов 
    location <20,8,8>   //расположение камеры
    look_at  0 //камера смотрит в точку 0 0 0
    right 16/9*x //тут можно указать соотношение сторон окна рендера
    up y
}   
  
light_source { 
    <10,30,-3>   
    color White   
}