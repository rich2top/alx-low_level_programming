#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print
 * Return: success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

