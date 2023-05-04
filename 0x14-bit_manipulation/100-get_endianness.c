#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the byte for big/small-endian
 * Return: big-endian returns 0, and little-endian returns 1
 */

int get_endianness(void)
{
	unsigned int i = 0;
	char *c = (char *) &i;

return ('*c');
}
