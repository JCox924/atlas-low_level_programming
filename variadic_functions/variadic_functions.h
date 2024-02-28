#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int _putchar(char c);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct f_dt - f_dt struct
 *
 * @identifier: conversion specifier
 *
 * @f: pointer to function
 */

typedef struct f_dt
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;
#endif
