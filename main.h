#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct print
{
    char *str;
    int (*func)(va_list);
} prt;

int print_string(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
int character(va_list args);
int percentage();
int print_number(va_list args)

#endif /* PRINTF */
