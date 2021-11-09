#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/* functions prototype */
int _printf(const char *format, ...);
int _putchar(char c);
/* functions prototypes conversion */
int print_char(char arg);
int print_string(char *arg);
int print_int(int arg);
unsigned int print_unsigned_int(unsigned int n);
#endif/* PRINTF_M */
