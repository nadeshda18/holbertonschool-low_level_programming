#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

typedef struct format_types
{
  char * id;
  void(*f)(char *separator, va_list args);
} f_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_int(char *separator, va_list args);
void print_f(char *separator, va_list args);
void print_str(char *separator, va_list args);

#endif
