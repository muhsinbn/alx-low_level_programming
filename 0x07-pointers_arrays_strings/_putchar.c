#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charqcter c to stdout
 * @c: the character to print out
 *
 * Rerurn: On success 1
 * On error: -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
