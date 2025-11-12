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
void insertAtTail(node** list, int data) {
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
  node* temp = *list;
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

// Delete first node of linked list
void deleteAtHead(node** list) {
  if (*list == NULL) {
    printf("List is empty\n");
    return;
  }
  node* temp = *list;
  *list = temp->next;
  free(temp);
}

// Delete last node of linked list
void deleteAtTail(node** list) {
  if (*list == NULL) {
    printf("List is empty\n");
    return;
  }
  node* temp = *list;
  if (temp->next == NULL) {
    free(temp);
    *list = NULL;
    return;
  }
  while (temp->next->next != NULL) {
    temp = temp->next;
  }
  free(temp->next);
  temp->next = NULL;
}

// Delete node at specific position in linked list
void deleteAtPosition(node** list, int position) {
  if (*list == NULL) {
    printf("List is empty\n");
    return;
  }
  node* temp = *list;
  if (position == 0) {
    deleteAtHead(list);
    return;
  }
  for (int i = 0; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }
  if (temp == NULL || temp->next == NULL) {
    printf("Position out of range\n");
    return;
  }
  node* next = temp->next->next;
  free(temp->next);
  temp->next = next;
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
