#include "main.h"

/**
 * character -  Print character
 * @args: the character
 *
 * Return: 1 (byte)
 */

int character(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * percentage - print %
 * @args: arguments
 *
 * Return: 1 (byte)
 */
int percentage(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
