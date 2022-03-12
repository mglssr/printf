#include "printf_main.h"
#include <stddef.h>

/**
 *
 *
 *
 */
void print_char(va_list c)
{
	char ch;

	ch = va_arg(c, int);

	_putchar(ch);
}

/**
 *
 *
 */
void print_string(va_list st)
{
	char *str;

	str = va_arg(st, char *);

	if (str == NULL)
	{
	return;
	}
	_putchar(*str++);
}
