#include<stdio.h>
int main()
{
    double num1;

    scanf("%lf", &num1);

    double num2;
    
    scanf("%lf", &num2);

    char c1;

    scanf(" %c", &c1); 
    
    printf("%.2lf\n", num1);   
    printf("%.2lf\n", num2);
    printf("%c \n", c1);
    return 0;
}