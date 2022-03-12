#include "printf_main.h"
#include <stdarg.h>

/**
* _printf - da un output acorde a un formato pasado (pend cambio)
* @format: una string (pend cambio)
* Return: retorna el numero de chars printeados
* rf: variable que Recorre Format
* rars: variable que Recorre ARray usando Struct
*/

int _printf(const char *format, ...);
{
	va_list args;
	int rf, rars;

	conv_f con_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};
	
	va_start(args, format)

	rf = 0;
	while (format != NULL && format[rf] != '\0')
	{	
		if (format[rf] != '%')
		{
			_putchar(format[rf]);
			rf++
		}
		else
			rars = 0;
			while (con_arr[rars].conv != '\0')
			{
				if (con_arr[rars].conv == format[rf + 1])
				{
					con_arr[rars].func(args);
				}
			rars++
			}
	rf++
	}

	va_end(args);

	_putchar('\0');

	return(_strlen(*format));
}
