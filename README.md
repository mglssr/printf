# _printf()

The _printf function produce output according a format.

```bash
int _printf(const char *format, ...)
```

## main.h

It contains all the function prototypes and structure declarations.

```python
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list str);
int print_int(va_list n);
int print_uint(va_list u);
int print_oct(va_list oc);
int print_mod(va_list mod);
int print_bin(va_list b);
int print_revs(va_list str);
int print_rot(va_list rot13);
int _putchar(char c);
int (*matching_func(const char *format))(va_list);

/**
* struct conversiones - se le asigna a cada flag del% con su respectiva funcion
* @conv: conversor que busco matchear
* @func: puntero que va a ir a una de las funcs que voy a usar para printear
*/
typedef struct conversiones
{
    char conv;
      int (*func)(va_list);
} conv_f;

#endif
```

## get_pr_func.c

Contains a function with an array made with the structure called "Conversiones", in each position of the array there are 2 elements, the first one corresponds to the conversion specifier we are looking for, if we find it, the loop ends and the function returns the second element that corresponds to the function that does the conversion..


```python
int (*matching_func(const char *format))(va_list)
{

    int i = 0;
	
		conv_f specs[] = {
			{'c', print_char},
			{'s', print_string},
			{'i', print_int},
			{'d', print_int},
			{'b', print_bin},
			{'u', print_uint},
			{'o', print_oct},
			{'r', print_revs},
			{'R', print_rot},
			{'%', print_mod},
			{'\0', NULL}
	};

	while (specs[i].conv != '\0')
	{
		if (specs[i].conv == *format)
			break;
		i++;
	}

	return (specs[i].func);
}
```
