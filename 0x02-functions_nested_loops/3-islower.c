#include <main.h>

/**
 * _islower - checks for lower case alpahabet
 *
 * parameters in ascii code 
 *
 * return :0
 *
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
