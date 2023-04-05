#include "main.h"

/**
 * _printf - print function
 * @format: is a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j, str_len = 0, flag = 0;
	prt format_funcs[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_mod},
		{'i', print_int},
		{'d', print_int},
	};
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			putchar(format[i]), str_len++;
		}
		else
		{
			j = 0, i++;
			while (j < 6)
			{
				if (format[i] == format_funcs[j].symbol)
				{
					str_len += format_funcs[j].print(list);
					flag = 1;
					break;
				}
				j++;
			}
			if (flag == 0)
			{
				putchar(format[--i]), str_len++;
			}
		}
		i++;
	}
	return (str_len);
}
