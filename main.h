#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _print_str(char *string);
int _printf(const char *format, ...);
int _print_int(long int var);
int _to_binary(unsigned int n);
int _to_octal(unsigned int n);
int _to_hexa(unsigned int n);
int _to_hexa_x(unsigned int n);
#endif
