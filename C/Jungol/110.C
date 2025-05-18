#include <stdio.h>
 
int main (void)
{
	double yard = 91.44;
	double num1;
 
	printf("yard? ");
	scanf("%lf", &num1);
	printf("%.1fyard = %.1fcm", num1, num1*yard);
}

