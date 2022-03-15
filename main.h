#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list str);
int print_int(va_list n);
int print_uint(va_list u);
int print_oct(va_list oc);
int print_mod(va_list mod);
int print_bin(va_list b);
int print_revs(va_list str);
int _putchar(char c);
int (*matching_func(const char *format))(va_list);

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
