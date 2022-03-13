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
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("Hola Mundo");
	printf("Hola Mundo");

	return (0);
}
