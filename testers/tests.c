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

	_printf("Hola Mundo");
	printf("Hola Mundo");
	_printf("%c", 'A');
	printf("%c", 'A');

	return (0);
}
