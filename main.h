#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_format - format of char and func. povoider
 * @symbol: print specifier
 * @print: pointer to specifier function
 *
 */
typedef struct print_format
{
	char symbol;
	int (*print)(va_list arg);
} prt;

int print_char(va_list arg);
int print_mod(va_list arg);
int print_void(va_list arg);
int print_float(va_list arg);
int print_str(va_list arg);
int _printf(const char *format, ...);
int print_int(va_list arg);
void int_helper(int value);

#endif
