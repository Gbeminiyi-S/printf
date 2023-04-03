#include "main.h"
/**
 * print_char - prints a ASCII character
 * @arg: argument to be printed
 */
void print_char(va_list arg)
{
	putchar(va_arg(arg, int));
}

/**
 * print_float - prints a float number
 * @arg: argument to be printed
 */
void print_float(va_list arg)
{
	putchar(va_arg(arg, double));
}

/**
 * print_str - prints a string
 * @arg: argument to be printed
 */
void print_str(va_list arg)
{
	char *string = va_arg(arg, char *);
	int i;

	if (!string)
		string = "(nil)";

	for (i = 0; string[i]; i++)
		putchar(string[i]);

}

/**
 * print_mod - prints modulus
 * @arg: argument to be printed
 */
void print_mod(va_list arg)
{
	(void)arg;

	putchar('%');
}
