#ifndef _MAIN_H_
#define _MAIN_H_

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct prvoid_format - format of char and func. povoider
 * @symbol: prvoid specifier
 * @prvoid: povoider to specifier function
 *
 */
typedef struct prvoid_format
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

#endif
