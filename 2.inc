//¬изуализировать изоповерхности с примененными к ним преобразовани€ми (пространства)       
  
#declare S = function {x*x+y*y*y+z*z -1} 
 
isosurface{
    function {S(0+z*tan(radians(45)),y,z)} 
    threshold 2
    accuracy 0.1
    contained_by {box{<3,-3,3> <-3,3,-3>}}
    max_gradient 20
    texture { pigment{hexagon White Very_Light_Purple Med_Purple scale 0.3} normal { ripples 5 scale 0.7} finish {specular 1 roughness 0.5}}  
    translate <0,0,-10> 
} 

#declare S1 = function {cos(y*pi)/2 + sqrt(x*x+z*z) - 2} 
#declare n = 1   ;
isosurface{
    function {S1(x+z*tan(radians(45)),z*sin(x*pi*n)+y*cos(x*pi*n),z*cos(x*pi*n)-y*sin(x*pi*n))}  
    threshold 0
    accuracy 0.005
    contained_by {sphere {<0,0,0> 3}}
    max_gradient 15
    texture { pigment{NeonPink} finish {specular 0.3 roughness 1}}  
} 