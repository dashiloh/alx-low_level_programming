#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - print to stdout
 * @str: string
 * Return: o on successful
 */

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len += 2)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
