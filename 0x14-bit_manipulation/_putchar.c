#include "main.h"
#include <unistd.h>

/**
 * _putchar -writes the character to standard output
 * @c: the character to be printed
 * Return: success 1
 * on error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
