#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d", &a, &b);
    scanf("\n%d %d", &c, &d);
    if (a>c&&b>d) {
        printf("%d",1);
    } else {
        printf("%d",0);
    }
    return 0;
}