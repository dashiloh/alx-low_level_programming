#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - check the code
* @argc: arguement count
* @argv: argument value, a strings that come after calling function
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);

}
