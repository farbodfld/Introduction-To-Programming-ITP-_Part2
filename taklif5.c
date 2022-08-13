#include <stdio.h>
#include <math.h>
int main() {
    int x1,y1,r1;
    int x2,y2,r2;
    scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    double d,w;
    d = fabs(r1 - r2);
    w=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if(w<d)
        printf("0");
    if(w>d && w<(r1 + r2))
        printf("2");
    if(w==d)
        printf("1");
    if(w>(r1 + r2))
        printf("0");
    if(w==(r1 + r2))
        printf("1");

    return 0;
}