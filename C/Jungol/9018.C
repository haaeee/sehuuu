#include <stdio.h>

int main() {
  int a = 7;
  int b = 5;

  printf("두 개의 수를 입력하시오. %d + %d = %d\n", a, b, a + b);
  printf("%d - %d = %d\n", a, b, a - b);
  printf("%d * %d = %d\n", a, b, a * b);
  printf("%d / %d = %d\n", a, b, a / b);
  printf("%d %% %d = %d\n", a, b, a % b);

  return 0;
}