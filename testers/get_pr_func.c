#include "printf_main.h"
#include <stdlib.h>

/**
* matching_func - contain the function that selects the correct
* format conversion to perform the print asked
* @format: argument to the program containg the respective (and actual) 
* specifier being tested
* Return: a pointer to the function that corresponds (or not)
* to the specifier given as a parameter. Example: matching_func("c") should
* return a pointer to the function print_char
*/
int (*matching_func(const char *format))(va_list)
{
	conv_f specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	int i = 0;

	while (specs[i].conv != '\0')
	{
		if (specs[i].conv == *format)
			break;
		i++;
	}

	return (specs[i].func);
}
