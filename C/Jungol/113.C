#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a+=5;
    b*=2;
    printf("width = %d",a);
    printf("\nlength = %d",b);
    printf("\narea = %d",a*b);
    return 0;
}