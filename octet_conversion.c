#include "main.h"

/**
 * print_octet - converts an integer to a octet
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_octet(va_list arg)
{
	int num = va_arg(arg, int);

	if (num >= 8)
	{
		print_octal(num / 8);
	}
	putchar('0' + (num % 8));
}
