#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Description
*
*Return: (0) if successful
*betty style doc for function main goes there
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
