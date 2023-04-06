#include "main.h"

/**
 * print_char - prints a ASCII character
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_char(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_str - prints a string
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_str(va_list arg)
{
	char *string = va_arg(arg, char *);
	int i;

	if (!string)
		string = "(null)";

	for (i = 0; string[i]; i++)
		putchar(string[i]);

	return (i);
}

/**
 * print_mod - prints modulus
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_mod(va_list arg)
{
	(void)arg;

	putchar('%');

	return (1);
}

/**
 * print_int - prints an integer
 * @arg: argument to be printed
 *
 * Return: 0
 */
int print_int(va_list arg)
{
	int value = va_arg(arg, int);

	if (value < 0)
	{
		putchar('-');
		value *= -1;
		return (1 + int_helper(value));
	}
	return (int_helper(value));
}

/**
 * int_helper - helper function
 * @value: argument to be printed
 *
 * Return: cars printed
 */
int int_helper(int value)
{
	int a = value, count = 0;

	if (value < 9)
	{
		putchar((a % 10) + '0');
		return (1);
	}
	count = 1 + int_helper(value / 10);

	putchar((a % 10) + '0');
	return (count);
}
