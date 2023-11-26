#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct prtf
{
    char str;

    int (*func)(va_list args);
} prt;
int get_fun(char format, va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int character(va_list args);
int percentage(__attribute__((unused)) va_list args);
int print_number(va_list args);

#endif
