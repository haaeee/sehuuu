// #include <stdio.h>

// int main (){
//     int a = 0, b = 1, c = 2;
//     printf("%d %d %d %d", (!a)?1:0,(b=1)?1:0, (c)?0:1, (a*c)?0:1);
// }

#include <stdio.h>

int main() {
	int a = 0, b = 1, c = 2;
	int result1 = (a<b) && (b<c);
	int result2 = (a&&b) || (b&&c);
	int result3 = (a || !c);
	int result4 = (a != b) && (b!=c);

	printf("%d %d %d %d",result1,result2,result3,result4);
	return 0;
}