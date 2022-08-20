#include <stdio.h>

int main() {
  int count = 0;
  int sum = 0;

  printf("Input Count : ");
  scanf("%d", &count);

  for (int i = 1; i <= count; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d ", j);
      sum += j;
    }
    printf("Sum = %d \n", sum);
    sum = 0;
  }

  return 0;
}