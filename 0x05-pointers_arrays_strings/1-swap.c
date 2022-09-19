#include <stdio.h>
#include "main.h"
/**
 * swap values - swap values of two variables
 * @a: values to swap
 * @b: values to swap
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
