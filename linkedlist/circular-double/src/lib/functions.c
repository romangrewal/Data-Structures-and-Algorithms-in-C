#include "functions.h"

// Create a new node
node* createNode(int data) {
  node* newNode = (node*)malloc(sizeof(node));
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

// Insert at head of linked list
void insertAtHead(node** list, int data) {
  node* newNode = createNode(data);

  if (*list == NULL) {
    *list = newNode; 
    (*list)->next = *list; // Point to itself
    (*list)->prev = *list; // Point to itself
  } else {
    node* last = (*list)->prev;

    newNode->next = *list;
    newNode->prev = last;

    (*list)->prev = newNode; // Update old head's prev
    last->next = newNode; // Update old last's next

    *list = newNode; // Update list pointer to new head
  }
  printf("Inserted %d at head.\n", data);
}

// Insert at tail of linked list
void insertAtTail(node** list, int data) {
  node* newNode = createNode(data);
  if (*list == NULL) {
    insertAtHead(list, data);
    return;
  } else {
    node* last = (*list)->prev;

    newNode->next = *list;
    newNode->prev = last;

    (*list)->prev = newNode; // Update old head's prev
    last->next = newNode; // Update old last's next
    
    /* DO NOT UPDATE LIST POINTER TO NEW HEAD */
  }
  printf("Inserted %d at tail.\n", data);
}

// Insert at specific position in linked list
void insertAtPosition(node** list, int data, int position) {
  if (position <= 0) {
    printf("Invalid position.\n");
    return;
  }

  if (position == 1) {
    insertAtHead(list, data);
    return;
  }

  node* newNode = createNode(data);
  node* current = *list;
  int i = 1;

  // Traverse to the node *before* the insertion point
  while (i < position - 1) {
    if (current == (*list)->prev) {
      printf("Position %d out of bounds (List size is %d).\n", position, i + 1);
      free(newNode);
      return;
    }
    current = current->next;
    i++;
  }

  // current is now the node before the insertion point
  newNode->next = current->next;
  newNode->prev = current;

  current->next->prev = newNode;
  current->next = newNode;

  printf("Inserted %d at position %d.\n", data, position);
}

void deleteAtHead(node** list) {
  if (*list == NULL) {
    printf("List is empty, cannot delete.\n");
    return;
  }

  node* toDelete = *list;
  int deletedData = toDelete->data;

  if ((*list)->next == *list) {
    *list = NULL;
  } else {
    node* last = (*list)->prev;

    *list = (*list)->next;
    (*list)->prev = last;
    last->next = *list;
  }

  free(toDelete);
  printf("Deleted %d from head.\n", deletedData);
}

void deleteAtTail(node** list) {
  if (*list == NULL) {
    printf("List is empty, cannot delete.\n");
    return;
  }

  if ((*list)->next == *list) {
    deleteAtHead(list);
    return;
  }

  node* toDelete = (*list)->prev;
  int deletedData = toDelete->data;
  node* newLast = toDelete->prev;

  newLast->next = *list;
  (*list)->prev = newLast;

  free(toDelete);
  printf("Deleted %d from tail.\n", deletedData);
}

// Delete node at specific position in linked list
void deleteAtPosition(node** list, int position) {
  if (*list == NULL) {
    printf("List is empty, cannot delete.\n");
    return;
  }

  if (position == 1) {
    deleteAtHead(list);
    return;
  }

  node* current = *list;
  int i = 1;

  // Traverse to the node *at* the deletion point
  while (i < position) {
    current = current->next;
    if (current == *list) { // Went past the last node (back to head)
      printf("Position %d out of bounds.\n", position);
      return;
    }
    i++;
  }

  int deletedData = current->data;

  current->prev->next = current->next;
  current->next->prev = current->prev;

  free(current);
  printf("Deleted %d from position %d.\n", deletedData, position);
}

// Print the list in forward direction
void printListForward(node* list) {
  if (list == NULL) {
    return;
  }
  node* temp = list;
  printf("Forward List: ");
  do {
    printf("%d -> ", temp->data);
    temp = temp->next;
  } while (temp != list);
  printf("(Head %d)\n", list->data);
}

// Print the list in reverse direction
void printListReverse(node* list) {
  if (list == NULL) {
    printf("The list is empty.\n");
    return;
  }
  node* temp = list->prev;
  // Traverse backwards
  printf("Reverse List: ");
  do {
    printf("%d -> ", temp->data);
    temp = temp->prev;
  } while (temp != list->prev);
  printf("(Tail %d)\n", list->prev->data);
}
