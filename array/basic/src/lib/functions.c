#include "functions.h"

// Insert element at beginning of array
void insertAtTop(ArrayWrapper arrayWrapper, int count, int data) {
  printf("Array before insertion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }

  // Shift elements to the right
  for (int i = count - 1; i >= 0; i--) {
    arrayWrapper.data[i + 1] = arrayWrapper.data[i];
  }

  // Insert the new element at the beginning
  arrayWrapper.data[0] = data;

  printf("\nArray after insertion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Insert element at end of array
void insertAtEnd(ArrayWrapper arrayWrapper, int count, int data) {
  printf("Array before insertion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  
  // Inserting element at the end of the array
  arrayWrapper.data[count - 1] = data;

  printf("\nArray after insertion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Insert at specific position in linked list
void insertAtPosition(ArrayWrapper arrayWrapper, int count, int data, int pos) { 
  printf("Array before insertion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  
  // Shifting elements to the right
  for(int i = count; i >= pos; i--) {
    arrayWrapper.data[i] = arrayWrapper.data[i - 1];
  }

  // Insert the new element at index pos - 1
  arrayWrapper.data[pos - 1] = data;

  printf("\nArray after insertion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Delete first element of array
void deleteAtTop(ArrayWrapper arrayWrapper, int count) {
  printf("Array before deletion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }

  // Shift all the elements 1 position to the left
  // starting from second element
  for (int i = 1; i < count; i++) {
    arrayWrapper.data[i - 1] = arrayWrapper.data[i];
  }

  // Reduce the array size by 1
  count--;

  printf("\nArray after deletion at top:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Delete last element of array
void deleteAtEnd(ArrayWrapper arrayWrapper, int count) {
  printf("Array before deletion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }

  // Reduce the array size by 1
  count--;

  printf("\nArray after deletion at end:\n");
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Delete node at specific position in linked list
void deleteAtPosition(ArrayWrapper arrayWrapper, int count, int pos) {
  printf("Array before deletion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }

  // Shift all the elements 1 position to the left
  // starting from position + 1 (i = pos)
  for (int i = pos; i < count; i++) {
    arrayWrapper.data[i - 1] = arrayWrapper.data[i];
  }

  // Logical removal of the trailing, now-redundant element
  // for printf
  if (pos <= count) {
    count--;
  }

  printf("\nArray after deletion at position %d:\n", pos);
  for (int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Print array forwards direction
void printForward(ArrayWrapper arrayWrapper, int count) {
  printf("Linear Traversal Forward: ");
  for(int i = 0; i < count; i++) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}

// Print array backwards direction
void printBackward(ArrayWrapper arrayWrapper, int count) {
  printf("Reverse Traversal: ");
  for(int i = count - 1; i >= 0; i--) {
    printf("%d ", arrayWrapper.data[i]);
  }
  printf("\n");
}
