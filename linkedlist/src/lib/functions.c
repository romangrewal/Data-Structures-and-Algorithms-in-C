#include "functions.h"

// Create a new node
node* createNode(int data) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

// Insert node at head of linked list
void insertAtHead(node** list, int data) {
  node* newNode = createNode(data);
  // dereferences (** list) giving you the ADDRESS of the first node
  newNode->next = *list;
  // list head pointer is updated to point to newly created node
  *list = newNode;
}

// Insert node at tail of linked list
void insertAtEnd(node** list, int data) {
  node* newNode = createNode(data);
  if (*list == NULL) { 
    *list = newNode;
    return;
  }
  node* temp = *list;
  while (temp->next != NULL) { 
    temp = temp->next;
  }
  temp->next = newNode;
}

// Insert at specific position in linked list
void insertAtPosition(node** list, int data, int position) { 
  node* newNode = createNode(data);
  if (position == 0) { 
    insertAtHead(list, data);
    return;
  }
  node* temp = *head;
  for (int i = 0; temp != NULL && i < (position - 1); i++) {
    temp = temp->next;
  }
  if (temp == NULL) { 
    printf("Position out of range\n");
    free(newNode);
    return;
  }
  newNode->next = temp->next;
  temp->next = newNode;
}

// Print linked list
void print(node* list) { 
  node* temp = list;
  while(temp != NULL) { 
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}
