//Визуализировать изоперхность состоящую из нескольких операций над изоповерхностями         
#declare S2 = function {cos(y*pi)/2 + sqrt(x*x+z*z) - 2}   
#declare S3 = function {pow(x,2)/3+pow(y,2)/2-pow(z,2)/1-1}
#declare n = 1   ;
isosurface{
    function {S2(x+z*tan(radians(45)),z*sin(x*pi*n)+y*cos(x*pi*n),z*cos(x*pi*n)-y*sin(x*pi*n))+S3(x,y,z)}  
    threshold 0
    accuracy 0.005
    contained_by {sphere {<0,0,0> 3}}
    max_gradient 15
    texture { pigment{Maroon} finish {specular 0.5 roughness 0.05}}  
    translate <0,0,10>
}