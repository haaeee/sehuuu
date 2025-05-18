#include <stdio.h>
int main () {
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d", (a>b&&a>c)?1:0, (a==b&&b==c)?1:0);
    return 0;
}