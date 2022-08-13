#include <stdio.h>
int main()
{
double a,b,c,d,e,f,g,h,shib1,shib2;
scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h,&shib1,&shib2);
if((d - b) * (h - f) == -1 * (c- a) * (g - e)){
printf("Yes");
}
else
{
printf("No");
}
return 0;
}