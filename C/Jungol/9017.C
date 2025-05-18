#include<stdio.h>
int main()
{
    double num1;

    printf("두 개의 실수를 입력하시오.\n");
    scanf("%lf", &num1);
    double num2;
    scanf("%lf", &num2);

    printf("x = %.2lf\n", num1); 
    printf("y = %.2lf\n", num2); 
    return 0;
}