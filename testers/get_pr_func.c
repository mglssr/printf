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
	con_f specs[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	int i = 0;

	while (specs[i].conv != NULL)
	{
		if (*format == specs[i].conv)
			break;
		else
			i++;
	}

	return (specs[i].func);
}
