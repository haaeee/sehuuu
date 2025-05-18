#include <stdio.h>
int main(){
    int a = 0, b = 1, c = 2;
    printf("%d ", (a && b) ? 1 : 0);
    printf("%d ", (a || b) ? 1 : 0);
    printf("%d ", (b && c) ? 1 : 0);
    printf("%d ", (!a) ? 1 : 0);
    return 0;
}