#include <stdio.h>

int fatorial(int number) {
  if (number == 1) {
    return number;
  };

  return number * fatorial(number - 1);
}


int main(void) {
  int result = fatorial(5);

  printf("Result: %d\n", result);

  return 0;
}
