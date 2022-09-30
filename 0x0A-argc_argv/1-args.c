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
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += sizeof(*argv) / sizeof(argv[0]);
	}
	printf("%d\n", sum);
	return (0);

}
