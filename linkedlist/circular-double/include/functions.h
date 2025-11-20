#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

/* CREATE */
node* createNode(int);

/* INSERTION */
void insertAtHead(node**, int);
void insertAtTail(node**, int);
void insertAtPosition(node**, int, int);

/* DELETION */
void deleteAtHead(node**);
void deleteAtTail(node**);
void deleteAtPosition(node**, int);

/* PRINT */
void printListForward(node*);
void printListReverse(node*);

#endif
