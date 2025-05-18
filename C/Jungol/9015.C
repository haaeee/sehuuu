#include<stdio.h>
int main()
{
    int num1,num2;

    printf("두 수를 입력하시오. ");
    scanf("%d%d", &num1, &num2);    // 표준 입력을 받아서 변수에 저장

    printf("%d + %d = %d\n", num1,num2,num1+num2);    // 변수의 내용을 출력
    printf("%d * %d = %d\n", num1,num2,num1*num2);
    return 0;
}