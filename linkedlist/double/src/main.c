#include "functions.h"

int main() {
  node* list = NULL;

  /* INSERTION */
  insertAtTail(&list, 10);
  insertAtTail(&list, 20);
  insertAtHead(&list, 5);
  insertAtPosition(&list, 15, 2); // List: 5 15 10 20

  printf("After Insertions:\n");
  printListForward(list);
  printListReverse(list);

  /* DELETION */
  deleteAtHead(&list); // List: 15 10 20
  deleteAtTail(&list); // List: 15 10
  deleteAtPosition(&list, 2); // List: 15

  printf("After Deletions:\n");
  printListForward(list);

  return 0;
}
