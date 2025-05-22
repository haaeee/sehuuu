#include <stdio.h>

int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    int x=(int)a*(int)b;
    int y=(int)(a*b);
    printf("%d %d",y,x);
}