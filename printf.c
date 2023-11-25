#include "main.h"

int _printf(const char *format, ...)

{
	int i = 0;
	int j = 0;
	int byte = 0;
	va_list args;
	prt f[] = {
		{"s", print_string},
		{"c", character},
		{"%", percentage},
		{"i", print_number},
		{"d", print_number},
		{"\0", NULL},
	};

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			byte++;
		}
		else
		{
			i++;
			while (f[j].str != NULL)

			{
				if (format[i] == f[j].str[0])

				{

					byte += f[j].func(args);
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(args);
	return (byte);
}
