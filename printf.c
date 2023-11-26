#include "main.h"

/**
 * _printf - main of printf function
 * @format: number of arguments
 *
 * Return: numbers of bytes printed.
 */
int _printf(const char *format, ...)
{
	int byte = 0;
	int i = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			byte += 1;
		}
		else
		{
			byte += get_fun(format[i + 1], args);
			i += 1;
		}
		i++;
	}
	va_end(args);
	return (byte);
}
