#include "functions.h"

int main() {
  node* list = NULL;

  /* INSERTION */
  insertAtHead(&list, 10);
  printListForward(list);
  printListReverse(list);
  insertAtTail(&list, 30);
  printListForward(list);
  printListReverse(list);
  insertAtHead(&list, 5);
  printListForward(list);
  printListReverse(list);
  insertAtPosition(&list, 20, 3);
  printListForward(list);
  printListReverse(list);

  printf("After Insertions:\n");
  printListForward(list);
  printListReverse(list);

  /* DELETION */
  deleteAtHead(&list); // List: 15 10 20
  printListForward(list);
  printListReverse(list);
  deleteAtTail(&list); // List: 15 10
  printListForward(list);
  printListReverse(list);
  deleteAtPosition(&list, 2); // List: 15
  printListForward(list);
  printListReverse(list);

  printf("After Deletions:\n");
  printListForward(list);
  printListReverse(list);

  return 0;
}
