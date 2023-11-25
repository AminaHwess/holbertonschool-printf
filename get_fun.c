#include "main.h"

int get_fun(char format, va_list args)
{
    int j = 0;
    int byte = 0;

    prt f[] = {
        {'s', print_string},
        {'c', character},
        {'%', percentage},
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