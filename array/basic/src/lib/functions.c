#include "functions.h"

// Insert element at beginning of array
void insertAtTop() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  int data = 100;

  printf("Array before insertion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  // Shift elements to the right
  for (int i = count - 1; i >= 0; i--) {
    arr[i + 1] = arr[i];
  }

  // Insert the new element at the beginning
  arr[0] = data;

  printf("\nArray after insertion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Insert element at end of array
void insertAtEnd() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  int data = 100;
  
  printf("Array before insertion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  
  // Inserting element at the end of the array
  arr[count - 1] = data;

  printf("\nArray after insertion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Insert at specific position in linked list
void insertAtPosition() { 
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  int data = 100;
  int pos = 5;
  
  printf("Array before insertion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  
  // Shifting elements to the right
  for(int i = count; i >= pos; i--) {
    arr[i] = arr[i - 1];
  }

  // Insert the new element at index pos - 1
  arr[pos - 1] = data;

  printf("\nArray after insertion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Delete first element of array
void deleteAtTop() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  
  printf("Array before deletion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  // Shift all the elements 1 position to the left
  // starting from second element
  for (int i = 1; i < count; i++) {
    arr[i - 1] = arr[i];
  }

  // Reduce the array size by 1
  count--;

  printf("\nArray after deletion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Delete last element of array
void deleteAtEnd() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  
  printf("Array before deletion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  // Reduce the array size by 1
  count--;

  printf("\nArray after deletion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Delete node at specific position in linked list
void deleteAtPosition() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  int pos = 5;
  
  printf("Array before deletion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }

  // Shift all the elements 1 position to the left
  // starting from position + 1 (i = pos)
  for (int i = pos; i < count; i++) {
    arr[i - 1] = arr[i];
  }

  // Logical removal of the trailing, now-redundant element
  // for printf
  if (pos <= count) {
    count--;
  }

  printf("\nArray after deletion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Print array forwards direction
void printForward() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  printf("Linear Traversal Forward: ");
  for(int i = 0; i < count; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Print array backwards direction
void printBackward() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int count = sizeof(arr) / sizeof(*arr);
  printf("Reverse Traversal: ");
  for(int i = count - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
