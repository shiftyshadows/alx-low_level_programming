#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#include<stdlib.h>

/*
 *File: function_pointers.h
 *
 *Desc: Header file containing declarations for all function
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif
