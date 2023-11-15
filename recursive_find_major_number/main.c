#include <stdio.h>

typedef struct list_member {
  int value;
  struct list_member *next;
} list_member;

int recursive_find_major_list_member(list_member *list_member_ptr) {
  if (list_member_ptr->next == NULL) {
    return list_member_ptr->value;
  }
  
  int first_value = list_member_ptr->value;
  int second_value = recursive_find_major_list_member(list_member_ptr->next);

  return first_value > second_value ? first_value : second_value;
}

int main(void) {
  list_member fourth_member = { value: 10, .next = NULL };
  list_member third_member = { value: -1, .next = &fourth_member };

  list_member second_member = { value: 2, .next = &third_member };
  list_member first_member = { value: 1, .next = &second_member };  
  
  int result = recursive_find_major_list_member(&first_member);

  printf("Result: %d\n", result);

  return 0;
}
