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

	printf("\n%s\n", "Mamuro");
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
	}
	return(int_helper(value));
}

/**
 * int_helper - helper function
 * @value: argument to be printed
 */
int int_helper(int value)
{
	int a = value, count = 1;

	if (value > 9)
	{
		count++;
		int_helper(value / 10);
	}
	count++;

	putchar((a % 10) + '0');
	return (count);
}
