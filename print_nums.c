#include "main.h"
#include <stddef.h>

/**
 *print_int - print an int or dec
 *@n: example
 *Return: number of number printed
 */
int print_int(va_list n)
{
	unsigned int dc, dig, nat;
	int num = va_arg(n, int);
	int countnum = 0;
	double f = 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (num < 0)
		{
			nat = num * -1;
			_putchar('-');
			countnum++;
		}

		while (f <= nat)
		{
			f = f * 10;
			dc = f / 10;
		}

		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0'), countnum++;
			nat = (nat - (dc * dig));
			dc = dc / 10;
		}
	}
	return (countnum);
}
