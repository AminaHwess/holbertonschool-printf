#include "main.h"

/**
 * print_number - Print number
 * @args: the number
 *
 * Return: n (bytes)
 */
int print_number(va_list args)

{
	int byte = 0;
	int d = 1;
	int va = va_arg(args, int);
	unsigned int num;

	if (va < 0)
	{
		byte += _putchar('-');
		num = va * -1;
	}

	else

		num = va;

	for (; num / d > 9;)
		d *= 10;

	for (; d != 0;)
	{
		byte += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}

	return (byte);
}
