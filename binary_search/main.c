#include <stdio.h>

int binary_search(int target, int number_list[], size_t list_size) {
  int first_position = 0;
  int last_position = list_size - 1;

  while (first_position  <= last_position) {
    int center = (first_position + last_position) / 2;

    int element_found = number_list[center];

    if (element_found == target) {
      return element_found;
    } else if (element_found > target) {
      last_position = center - 1;
    } else {
      first_position = center + 1;
    }
  };
 
  return -1;
}

int main(void) {
  int number_list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  size_t list_size = sizeof(number_list) / sizeof(int);

  int target = 4;
  
  printf("%d\n", binary_search(target, number_list, list_size));
  
  return 0;
}
