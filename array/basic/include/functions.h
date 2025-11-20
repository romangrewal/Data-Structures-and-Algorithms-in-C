#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>

/* CREATE */
node* createNode(int);

/* INSERTION */
void insertAtTop(int*, int);
void insertAtEnd(int*, int);
void insertAtPosition(int*, int, int);

/* DELETION */
void deleteAtHead(node**);
void deleteAtTail(node**);
void deleteAtPosition(node**, int);

/* PRINT */
void printForward(int*);
void printBackward(int*);

#endif
