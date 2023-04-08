#include "main.h"

/**
 * print_binary - converts an integer to a binary
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_binary(va_list arg)
{
	int num = va_arg(arg, int);
	int len = 0, num_copy, i, k;
	char *str = NULL;

	if (num < 0)
		len = 32;
	else
	{
		num_copy = num;
		while (num_copy > 0)
 		{
        		num_copy /= 2;
 			len++;
 		}
	}

	str = malloc(sizeof(char *) * len);
	for (i = len - 1; i >= 0; i--)
	{
 		k = num >> i;
		if (k & 1)
			str[len - i - 1] = '1';
		else
			str[len - i - 1] = '0';
		putchar(str[len - i - 1]);
	}
	if (num < 0)
		return (len - 1);
	else
		return (len);
}
