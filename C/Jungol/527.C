#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %.2f", a/b, (double)(a)/b);
    return 0;
}