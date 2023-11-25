#include "main.h"

/**
 * print_number - Print number
 * @args: the number
 *
 * Return: n (bytes)
 */
int print_number(va_list args)
{
    int number = va_arg(args, int);
    int count = 0;

    if (number < 0)
    {
        _putchar('-');
        number = -number;
        count++;
    }

    if (number / 10)
        count += print_digit(number / 10);

    _putchar(number % 10 + '0');
    return count + 1;
}

/**
 * print_digit - print digit
 * @num: the number
 *
 * Return: Number of digits printed
 */
int print_digit(int num)
{
    int count = 0;

    if (num / 10)
        count += print_digit(num / 10);

    _putchar(num % 10 + '0');
    return count + 1;
}