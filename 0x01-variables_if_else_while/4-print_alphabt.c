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
	char alph;
	char e;
	char q;

	e = 'e';
	q = 'q';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != e && alph != q)
			putchar(alph);
	}
	putchar('\n');

	return (0);
}
