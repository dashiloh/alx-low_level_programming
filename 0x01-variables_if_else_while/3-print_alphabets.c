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
	char i;
	char t;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
