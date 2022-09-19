#include <stdio.h>
#include "main.h"
/**
 * _strlen - string ccounting
 * @s: string
 * Return: string length upon success
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
