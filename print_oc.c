#include "main.h"
#include <stddef.h>

/**
 *print_oct - print in octal number system
 *@oc: arg passed to convert amd print as octal
 *Return: number of digits printed
 */
int print_oct(va_list oc)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(oc, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n = n / 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int) + 1);

	if (arr == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
