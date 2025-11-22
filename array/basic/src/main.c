#include "functions.h"

int main() {
  
  // Rely on order of members to create array structure
  ArrayWrapper arrayWrapper = {{10, 20, 30, 40, 50, 60, 70}};
  int count = sizeof(arrayWrapper.data) / sizeof(arrayWrapper.data[0]);

  printForward(arrayWrapper, count);
  printBackward(arrayWrapper, count);
  printf("\n");
  
  insertAtTop(arrayWrapper, count, 100);
  printf("\n");
  insertAtEnd(arrayWrapper, count, 100);
  printf("\n");
  insertAtPosition(arrayWrapper, count, 100, 5);
  printf("\n");

  deleteAtTop(arrayWrapper, count);
  printf("\n");
  deleteAtEnd(arrayWrapper, count);
  printf("\n");
  deleteAtPosition(arrayWrapper, count, 5);
}
