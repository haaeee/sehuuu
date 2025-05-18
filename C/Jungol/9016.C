#include<stdio.h>
int main()
{
    int num1;

    printf("키를 입력하세요. ");
    scanf("%d", &num1);

    double num2;
    
    printf("몸무게를 입력하세요. ");
    scanf("%lf", &num2);

    char c1;

    printf("이름을 입력하세요. ");
    scanf(" %c", &c1); 
    
    printf("키 = %d\n", num1);   
    printf("몸무게 = %.1lf\n", num2);
    printf("이름 = %c \n", c1);
    return 0;
}