#include "main.h"

/**
 * _isupper - Check if the letter is upper
 * @c: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
