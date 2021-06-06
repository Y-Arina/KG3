//Визуализировать несколько изоповерхностей с разными настройками.    
isosurface{
    function {x+y+z}
    threshold 0
    accuracy 0
    contained_by {box{<3,-4,3> <-3,4,-3>}}
    max_gradient 20
    texture {pigment {brick Scarlet White scale 0.5} finish {specular 0.2 roughness 0.05}} 
    scale 0.6 
    translate <0,6,-10>
}    

isosurface{
    function {pow(x,2)/3-pow(z,2)/2-y}
    threshold 1
    accuracy 0.005
    contained_by {sphere {<0,0,0> 4}}
    max_gradient 10
    texture {pigment {Flesh} normal { crackle 2 scale 5} finish {specular 0.5 roughness 0.01}} 
    scale 0.5 
    translate <0,6,0>
}

isosurface{
    function {pow(x,2)/3+pow(y,2)/2-pow(z,2)/1-1}
    threshold -0.2
    accuracy 0.01
    contained_by {box{<4,-4,4> <-4,4,-4>}}
    max_gradient 5
    texture {pigment {CoolCopper} finish {specular 0.9 roughness 0.1} normal{agate 1 scale 1/2}}   
    scale 0.5 
    translate <0,6,10>
}