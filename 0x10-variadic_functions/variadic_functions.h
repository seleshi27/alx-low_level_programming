#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

/**
 *struct dt- datatype
 * @letter : character
 * @func: function pointer
 */
typedef struct dt
{
	  char letter;
	    void (*func)(va_list);
} datatype;

void print_c(va_list c);
void print_n(va_list n);
void print_s(va_list s);
void print_fl(va_list f);
#endif