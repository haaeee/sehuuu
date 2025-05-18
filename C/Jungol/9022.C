#include <stdio.h>

int main(void){

    int a, b;
    scanf("%d %d", &a, &b);
    int c = ++a + b--;
    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
}