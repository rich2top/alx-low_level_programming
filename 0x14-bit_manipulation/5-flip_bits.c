#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips bit from one number to another
 * @n: number to flip
 * @m: new number generated
 * Return: bit number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{current = exclusive >> i;

		if (current & 1)
			count++;
	}
	return (count);
}
