#include "printf_main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - da un output acorde a un formato pasado (pend cambio)
* @format: una string (pend cambio)
* Return: retorna el numero de chars printeados
* rf: variable que Recorre Format
*/

int _printf(const char *format, ...)
{
	va_list args;
	int rf;
	int ccounter = 0;
	int (*mfunc)(va_list);

	va_start(args, format);

	rf = 0;
	while (format != NULL && format[rf] != '\0')
	{	
		while (format[rf] != '%' && format[rf] != '\0')
		{
			_putchar(format[rf]);
			ccounter++;
			rf++;
		}

		if (format[rf] == '%')

			mfunc =	matching_func(&format[rf + 1]);

		if (mfunc != NULL)
		{
			ccounter += mfunc(args);
			rf += 2;
			continue;
		}
		
	}

	va_end(args);

	return(ccounter);
}
