#include "printf_main.h"

/**
 *
 *
 *
 */
int print_char(va_list c)
{
	char ch;

	ch = va_arg(c, int);

	_putchar(ch);

	return(0);
}

/**
 *
 *
 */
int print_string(va_list str)
{
	char *str;

	str = va_arg(s, char *);

	if (str == NULL)
	{
	return;
	}
	_putchar(*s++);
	return (0);
}
