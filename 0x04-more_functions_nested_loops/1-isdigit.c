#include "main.h"

/**
 * _isdigit - check for digit
 *
 * Description : checks if a number falls between 0 and 9
 *
 * @c:  digit to be checked
 *
 * Return: 1 if its a digit and 0 if not
 */

int _isdigit(int c);
{
	if (c > 47  && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
