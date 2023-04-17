#include "main.h"

/**
 * print_binary - converts an integer to a binary
 * @arg: argument to be printed
 *
 * Return: count of characters
 */
int print_binary(va_list arg)
{
	int num = va_arg(arg, int), i;
	int len = 0, num_copy;
	char *str = NULL;

	if (num < 0)
		len = 32;
	else
	{
		num_copy = num;
		if (num_copy == 0)
			len++;
		while (num_copy > 0)
 		{
        		num_copy /= 2;
 			len++;
 		}
	}
	str = print_binary_helper(str, len, num);

	for (i = len - 1; i >= 0; i--)	
		putchar(str[len - i - 1]);
	
	free(str);
	return (len);
}
	
char *print_binary_helper(char *str, int len, int num)
{
	int i, k;

	str = malloc(sizeof(char *) * len);
	if (!str)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
 		k = num >> i;
		if (k & 1)
			str[len - i - 1] = '1';
		else
			str[len - i - 1] = '0';
	}
	return (str);
}
