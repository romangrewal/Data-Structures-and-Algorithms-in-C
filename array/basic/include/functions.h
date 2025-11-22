#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>
#include "array.h"

/* INSERTION */
void insertAtTop(ArrayWrapper, int, int);
void insertAtEnd(ArrayWrapper, int, int);
void insertAtPosition(ArrayWrapper, int, int, int);

/* DELETION */
void deleteAtTop(ArrayWrapper, int);
void deleteAtEnd(ArrayWrapper, int);
void deleteAtPosition(ArrayWrapper, int, int);

/* PRINT */
void printForward(ArrayWrapper, int);
void printBackward(ArrayWrapper, int);

#endif
