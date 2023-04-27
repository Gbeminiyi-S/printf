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

	return (octet_helper(num));
}
int octet_helper(int num)
{
	if (num >= 8)
	{
		num /= 8;
		return (1 + octet_helper(num));
	}
	putchar('0' + (num % 8));
	return (1);
}
