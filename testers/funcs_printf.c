#include "printf_main.h"
#include <stddef.h>

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

	return (1);
}

/**
 *
 *
 */

int print_string(va_list s)
{
	char *str;
	int counter;

	str = va_arg(s, char *);
	
	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	return (counter);
}
