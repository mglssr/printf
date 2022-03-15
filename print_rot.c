#include "main.h"

/**
 *print_rot - print the character rotated 13 places
 *@rot13: passed string as parameter
 *Return: number of characters rotated printed, or error
 */
int print_rot(va_list rot13)
{
	int a = 0;
	int count = 0;
	char *s;

	s = va_arg(rot13, char *);

	if (s == NULL)
		return (-1);
	while (s[a] != '\0')
	{
		if ((s[a] >= 'a' && s[a] <= 'z') ||
				(s[a] >= 'A' && s[a] <= 'Z'))
		{
			if ((s[a] >= 'n' && s[a] <= 'z') ||
					(s[a] >= 'N' && s[a] <= 'Z'))
			{
				count = count + _putchar(s[a] - 13);
			}
			else
			{
				count = count + _putchar(s[a] + 13);
			}
		}
		else
			count = count + _putchar(s[a]);
		a++;
	}
	return (count);
}
