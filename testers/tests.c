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
	_printf("Cha%racter:[%s%%s] algoaswnhd\n", "Holiwis", "alhre");
	_printf("String:[%s%s]%", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	_printf("%");
	return (0);
}
