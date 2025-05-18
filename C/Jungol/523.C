#include <stdio.h>
int main(){
    int i,j,k = 0;

    scanf("%d %d", &i, &j);
    k = (i>j)? 1 : 0;
    printf("%d > %d --- %d\n", i, j, k);
    k = (i<j)? 1 : 0;
    printf("%d < %d --- %d\n", i, j, k);
    k = (i>=j)? 1 : 0;
    printf("%d >= %d --- %d\n", i, j, k);
    k = (i<=j)? 1 : 0;
    printf("%d <= %d --- %d\n", i, j, k);

    return 0;
}