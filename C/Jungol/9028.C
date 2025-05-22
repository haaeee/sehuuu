#include <stdio.h>
#include <math.h>

int main()
{
	double a=0;
	scanf("%lf",&a);
	printf("%.0lf / 4 = %.0lf\n",a,a/4);
	printf("%.0lf / 4.0 = %.2lf",a,a/4);

    return 0;
}