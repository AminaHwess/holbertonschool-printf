#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct format - Struct for format
 * @str: Struct format
 * @func: The function associated
 */

typedef struct prtf
{
    char str;

    int (*func)(va_list args);
} prt;

/*prototypes*/
int get_fun(char format, va_list args);
int _printf(const char *format, ...);
int _putchar(char c);

/*Conversion specifiers*/
int print_string(va_list args);
int character(va_list args);
int percentage(__attribute__((unused)) va_list args);
int print_number(va_list args);

#endif
