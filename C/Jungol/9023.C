#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d %d", a==b, b==c, a != b, b != c);
    return 0;
} 