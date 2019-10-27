#include<stdio.h>
int main(){
  float h,m;
  do{
    printf("hours: ");
    scanf("%f",&h);
  }while(h>12&&h<1);
  do{
    printf("minute: ");
    scanf("%f",&m);
  }while(m>60&&m<1);
  float a,b;
  float angle;
  a=((h*60)+m)*0.5; //12 hours = 720 min = 360 degree angle 
  b=m*6; //1 min = 6 degree angle
  angle=a-b;
  if(angle<0){
    angle=angle*(-1);
  }
  printf("%.0f",angle);
  return 0;
}
