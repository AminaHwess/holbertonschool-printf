#include "main.h"

/**
 * print_number - function that returns an int to signed decimal
 * @args: arguments passed
 * Return: length of integers
 */
int print_number(va_list args)
{
    int i, div, len;
    unsigned int num;

    i = va_arg(args, int);
    div = 1;
    len = 0;
    
    if (i < 0)
    {
        len += _putchar('-');
        num = (unsigned int)(-i);
    }
    else
    {
        num = (unsigned int)i;
    }

    for (; num / div > 9;)
    {
        div *= 10;
    }

    for (; div != 0;)
    {
        len += _putchar('0' + (num / div));
        num %= div;
        div /= 10;
    }

    return len;
}
