#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/*
 *File: variadic_functions.h
 *
 *Desc: Header file containing declarations for all function
 */

void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* variadic_functions.h  */
