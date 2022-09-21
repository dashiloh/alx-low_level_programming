#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strcat - function to concatenate strings
 * @dest: destination
 * @src: source
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < (src[i] != '\0') && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
