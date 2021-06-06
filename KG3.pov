#include "colors.inc"   
#include "1.inc"     
#include "2.inc"
#include "3.inc"

background{   //���� ������� ����
    rgb<0.8,1,1>
}    

camera {               
    angle 80  //���� ������ ������ 80 �������� 
    location <20,8,8>   //������������ ������
    look_at  0 //������ ������� � ����� 0 0 0
    right 16/9*x //��� ����� ������� ����������� ������ ���� �������
    up y
}   
  
light_source { 
    <10,30,-3>   
    color White   
}