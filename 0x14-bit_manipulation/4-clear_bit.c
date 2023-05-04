#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at agiven index
 * @index: index of the bit you want to set
 * Return: success returns 1, error returns -1
 * @n: number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return ('-1');
	*n = (~(1UL << index) & *n);
	return ('1');
}
