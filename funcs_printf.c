#include "main.h"
#include <stddef.h>

/**
 *print_char - print a char given a certain argumet form matched struct
 *@c: example
 *Return: number of characters printed, always 1 in this case
 */

int print_char(va_list c)
{
	char ch;

	ch = va_arg(c, int);

	_putchar(ch);

	return (1);
}

/**
 *print_string - print a string given as an argument from argument list
 *@s: example
 *Return: number of characters printed
 */

int print_string(va_list s)
{
	char *str;
	int counter = 0;

	str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	return (counter);
}
