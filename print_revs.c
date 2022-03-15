#include "main.h"

/**
 *print_revs - prints the reversed string
 *@str: passed string as parameter from variadic function
 *Return: character count
 */
int print_revs(va_list str)
{
	char *reveS;
	int contch = 0;
	int index = 0;

	reveS = va_arg(str, char *);
	if (reveS == NULL)
	{
		reveS = NULL;
		return (0);
	}

	else
	{
		while (reveS[index] != '\0')
		{
			index++;
		}

		for (index -= 1; index >= 0; index--)
		{
			_putchar(reveS[index]);
			contch++;
		}
	}
	return (contch);
}
