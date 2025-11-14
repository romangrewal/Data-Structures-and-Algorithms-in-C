#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

/* CREATE */
node* createNode(int);

/* INSERTION */
void insertAtPosition(node**, int, int);

/* DELETION */
void deleteAtPosition(node**, int);

/* PRINT */
void print(node*);

#endif
