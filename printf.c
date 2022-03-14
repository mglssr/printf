#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* _printf - function that prints messages on the screen using a format
* @format: a string (PEND)
* Return: returns the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int rf, counter = 0;
	int (*mfunc)(va_list);

	va_start(args, format);

	rf = 0;
	while (format != NULL && format[rf] != '\0')
	{
		if (format[rf] != '%' && format[rf] != '\0')
		{
			_putchar(format[rf]);
			counter++;
			rf++;
		}

		if (format[rf] == '%')
		{
			if (format[rf + 1] != '\0')
			{
				mfunc = matching_func(&format[rf + 1]);

				if (mfunc != NULL)
				{
					counter += mfunc(args);
					rf += 2;
					continue;
				}
				else
				{
					_putchar('%');
					counter ++;
					rf++;
					continue;
				}
			}
			else
			{
				rf += 1;
				continue;
			}
		}
	}
	va_end(args);

return (counter);
}

