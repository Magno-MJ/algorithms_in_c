#include <stdio.h>

int recursive_sum(int number_list[], int initial, int last) {
  int current = number_list[initial];

  if (initial == last) {
    return current;
  }
  
  int new_initial = initial + 1;

  return current + recursive_sum(number_list, new_initial, last);
}

int main(void) {
  int numbers[] = { 2, 5, 8, 9 };
  
  int result = recursive_sum(numbers, 0, 3);

  printf("Result: %d\n", result);

  return 0;
}
