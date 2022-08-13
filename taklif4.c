#include <stdio.h>

int main() 
{
 double weight,height,BMI;
 scanf("%lf %lf",&weight,&height);
  BMI = weight/(height*height);
       printf("%0.2lf\n",BMI);
    if(BMI<18.5)
       printf("UnderWeight");
    if(18.5<=BMI && BMI<25)
       printf("Normal");
    if(25<=BMI && BMI<30)
       printf("OverWeight");
    if(30<=BMI)
       printf("Obese");
return 0;
}