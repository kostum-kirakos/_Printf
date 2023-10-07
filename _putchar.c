#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a character to stdout
 * @c: character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
