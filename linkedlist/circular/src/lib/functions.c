#include "functions.h"

// Create a new node
node* createNode(int data) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

// Insert at specific position in linked list
void insertAtPosition(node** list, int data, int position) {
  if (position < 1) {
    printf("Position should be >= 1.\n");
    return;
  }

  // if we are inserting at head
  if (position == 1) {
    insertAtHead(list, data);
    return;
  }
  node* newNode = createNode(data);
  node* temp = *list;
  for (int i = 1; temp != NULL && i < position - 1; i++) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf(
        "Position greater than the number of nodes.\n");
    return;
  }
  newNode->next = temp->next;
  newNode->prev = temp;
  if (temp->next != NULL) {
    temp->next->prev = newNode;
  }
  temp->next = newNode;
}

// Delete node at specific position in linked list
void deleteAtPosition(node** list, int position) {
  if (*list == NULL) {
    printf("The list is already empty.\n");
    return;
  }
  node* temp = *list;
  if (position == 1) {
    deleteAtHead(list);
    return;
  }
  for (int i = 1; temp != NULL && i < position; i++) {
    temp = temp->next;
  }
  if (temp == NULL) {
    printf("Position is greater than the number of "
        "nodes.\n");
    return;
  }
  if (temp->next != NULL) {
    temp->next->prev = temp->prev;
  }
  if (temp->prev != NULL) {
    temp->prev->next = temp->next;
  }
  free(temp);
}

// Print the list in forward direction
void printListForward(node* list) {
  if (list == NULL) {
    return;
  }
  node* temp = list;
  do {
    printf("%d -> ", temp->data);
    temp = temp->next;
  } while (temp != list);
  printf("HEAD\n");
}

// Print the list in reverse direction
void printListReverse(node* list) {
  node* temp = list;
  if (temp == NULL) {
    printf("The list is empty.\n");
    return;
  }
  // Move to the end of the list
  while (temp->next != NULL) {
    temp = temp->next;
  }
  // Traverse backwards
  printf("Reverse List: ");
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->prev;
  }
  printf("\n");
}
