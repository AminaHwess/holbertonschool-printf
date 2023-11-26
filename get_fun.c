#include "main.h"

/**
 * get_fun - function specifiers.
 *
 * @format: Conversion specifiers.
 * @args: arguments.
 *
 * Return: byte
 */

int get_fun(char format, va_list args)
{
	int j = 0;
	int byte = 0;

	prt f[] = {
		{'s', print_string},
		{'c', character},
		{'%', percentage},
		{'i', print_number},
		{'d', print_number},
		{'\0', NULL},
	};

	while (f[j].str != '\0')

	{
		if (format == f[j].str)
		{

			byte += f[j].func(args);
			break;
		}
		j++;
		if (f[j].str == '\0')
		{
			_putchar('%');
			_putchar(format);
			byte += 2;
		}
	}

	return (byte);
}
