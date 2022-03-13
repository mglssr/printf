#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list str);
int _putchar(char c);
int _strlen(char *s);
int (*matching_func(const char *format))(va_list);

/**
* struct conversions - structure 
* @conv: converters that we need to match
* @func: pointer that will point to the function that matches the "flag"
* structure alias: conv_f
*/
typedef struct conversiones
{
  char conv;
  int (*func)(va_list);
} conv_f;

#endif
