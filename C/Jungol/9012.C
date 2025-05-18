#include <stdio.h>
int main()
{
    int a,b;
    double c;

    a = 5;
    b = 2;
    c = 3.140000;

    printf("원주 = %d * %d * %f = %f\n",a,b,c,a*b*c);
    printf("넓이 = %d * %d * %f = %f\n",a,a,c,a*a*c);
    
    return 0;
}