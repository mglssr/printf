#include "main.h"
#include <stddef.h>
/**
 *print_binary - print in binary
 *@b: argument pass as number to convert to binary
 *Return: binary number's count
 */
int print_bin(va_list b)
{
	unsigned int rem;
	int index, contbin;
	char *guardaval;
	unsigned int argu = va_arg(b, int);

	if (argu == 0)
	{
		_putchar('0');
		return (1);
	}
	rem = argu;
	if (rem != 0)
	{
		contbin = 0;
		while (rem > 0)
		{
			rem = rem / 2;
			contbin++;
		}
		rem = argu;
		guardaval = malloc((sizeof(char) * contbin) + 1);
		if (guardaval)
		{
			index = 0;
			while (rem > 0)
			{
				guardaval[index] = ((rem % 2) + 48);
				index++;
				rem = rem / 2;
			}
			while (index != 0)
			{
				index--;
				_putchar(guardaval[index]);
			}
		}
		else
			return (-1);
	}
	free(guardaval);
	return (contbin);
}
