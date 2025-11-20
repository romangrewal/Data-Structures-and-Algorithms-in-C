#include "functions.h"

// Insert element at beginning of array
void insertAtTop(int* arr, int data) {
  int n = sizeof(arr) / sizeof(arr[0]);

  // Shift elements to the right
  for (int i = n - 1; i >= 0; i--) {
    arr[i + 1] = arr[i];
  }

  // Insert the new element at the beginning
  arr[0] = data;

  printf("\nArray after insertion:\n");
  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }
}

// Insert element at end of array
void insertAtEnd(int* arr, int data) {
  int n = sizeof(arr) / sizeof(arr[0]);

  // Inserting element at the end of the array
  arr[n] = data;

  printf("\nArray after insertion\n");
  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }
}

// Insert at specific position in linked list
void insertAtPosition(int* arr, int data, int position) { 
  int n = sizeof(arr) / sizeof(arr[0]);
  
  // Shifting elements to the right
  for(int i = n; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  // Insert the new element at index pos - 1
  arr[pos - 1] = data;

  printf("\nArray after insertion\n");
  for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
  }
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

// Print array forwards direction
void printForward(int* arr) {
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Linear Traversal Forward: ");
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Print array backwards direction
void printBackward(int* arr) {
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Reverse Traversal: ");
  for(int i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
