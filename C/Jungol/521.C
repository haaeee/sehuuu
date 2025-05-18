#include <stdio.h>

int main (void){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = a++ * --b;
    printf("%d %d %d", a, b, c);
    return 0;
}