#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_format - format of char and func. pointer
 * @symbol: print specifier
 * @print: pointer to specifier function
 *
 */
typedef struct print_format
{
	char symbol;
	void (*print)(va_list arg);
} prt;


void print_char(va_list arg);
void print_mod(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
int _printf(const char *format, ...);

#endif
