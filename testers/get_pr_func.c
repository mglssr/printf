#include "printf_main.h"
#include <stdlib.h>

/**
* get_pr_func - contain the function that selects the correct
* format conversion to perform the print asked
* @format: argument to the program containg the respective (and actual) 
* specifier being tested
* Return: a pointer to the function that corresponds (or not)
* to the specifier given as a parameter. Example: get_pr_func("c") should
* return a pointer to the function print_char
*/
int (*get_op_func(const char *format))(va_list)
{
	op_t specs[] = {
		{"c", op_add},
		{"s", op_sub},
		{NULL, NULL}
	};

	int i = 0;

	while (specs[i].conv != NULL)
	{
		if (*format == specs[i].conv)
			break;
		i++;
	}

	return (specs[i].func);
}
