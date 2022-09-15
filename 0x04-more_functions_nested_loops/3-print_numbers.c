#include "main.h"
#include <ctype.h>
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 upon sucess
 */
void print_numbers(void)
{	int num;
	{
		for (num = '0'; num <= '9'; num++)
			_putchar(num);
	}
	_putchar('\n');
}
