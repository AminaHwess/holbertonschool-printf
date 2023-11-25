#include "main.h"
/**
 * main - main function
 *
 *
 */

int character(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
}

int percentage(__attribute__((unused)) va_list args)
{
    _putchar('%');
    return(1);
}

