#include <stdio.h>

typedef struct list_member {
  int value;
  struct list_member *next;
} list_member;

int recursive_count_list_members(list_member *list_member_ptr) {
  if (list_member_ptr == NULL) {
    return 0;
  }

  return 1 + recursive_count_list_members(list_member_ptr->next);
}

int main(void) {
  list_member second_member = { value: 2, .next = NULL };
  list_member first_member = { value: 1, .next = &second_member };  
  
  int result = recursive_count_list_members(&first_member);

  printf("Result: %d\n", result);

  return 0;
}
