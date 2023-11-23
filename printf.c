#include "main.h"

int _printf(const char *format, ...)

{
	int i = 0;
	int j = 0;
	int byte = 0;

	prt f[] = {
		{"s", string},
		{"c", character},
		{"%", percentage},
		{"\0", NULL},
	};

	va_list args;

	va_start(args, format);
	/*
		if (format == NULL || format[i + 1] == '\0')
		{
			return (-1);
		}
	*/
	if (format == NULL)
		return (-1);
	while (*(format + i) && format)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			byte++;
		}

		else
		{

			while (f[i].str != NULL)

			{
				if (strcmp(format, f[i].str) == 0)

				{
					return (f[i].func(args));
				}
				j++;
			}
		}
	}
	va_end(args);
	return (byte);
}
