#include "functions.h"

int main() { 
  node* list = NULL;

  /* INSERTION DRIVER */
  insertAtHead(&list, 10);
  printf("Linked list after inserting the node:10 at the beginning \n");
  print(list);

  printf("Linked list after inserting the node:20 at the end \n");
  insertAtEnd(&list, 20);
  print(list); 
    
  printf("Linked list after inserting the node:5 at the end \n");
  insertAtEnd(&list, 5);
  print(list); 
    
  printf("Linked list after inserting the node:30 at the end \n");
  insertAtEnd(&list, 30);
  print(list); 
    
  printf("Linked list after inserting the node:15 at position 2 \n");
  insertAtPosition(&list, 15, 2);
  print(list);

  insertAtHead(&list, 23);
  printf("Linked list after inserting the node:23 at the beginning \n");
  print(list);

  insertAtHead(&list, 56);
  printf("Linked list after inserting the node:56 at the beginning \n");
  print(list);

  insertAtHead(&list, 77);
  printf("Linked list after inserting the node:77 at the beginning \n");
  print(list);

  printf("Linked list after inserting the node:15 at position 4 \n");
  insertAtPosition(&list, 15, 4);
  print(list);


}
