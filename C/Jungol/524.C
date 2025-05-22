#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a && b, a || b);
    return 0;
}
/*
&& :and 연산자 (논리곱)
|| :or 연산자 (논리합)

*/
