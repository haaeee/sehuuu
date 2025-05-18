#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    a++;
    printf("%d %d", a, b);
    b--;
    printf("\n%d %d", a, b);
    return 0;
}