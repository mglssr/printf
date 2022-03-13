#include <limits.h>
#include <stdio.h>
#include "printf_main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'H', 'J');
	_printf("String:[%s]\n", "I am a string !");
	return (0);
}
