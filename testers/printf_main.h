#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list str);
int _putchar(char c);
int _strlen(char *s);

/**
* struct conversiones - se le asigna a cada flag del% con su respectiva funcion
* @conv: conversor que busco matchear 
* @func: puntero que va a ir a una de las funcs que voy a usar para printear
*/
typedef struct conversiones
{
  char conv;
  int (*func)(va_list);
} conv_f;

#endif
