#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the valueof a bit to 1 at a
 * given index
 * @n: number to change
 * @index: index of the bit to set from 0
 * Return: success returns 1, error returns -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return ('1');
}
