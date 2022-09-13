#include "main.h"

/**
 *_islower - checks for lower case alpahabets , if it lower returns 1, returns 0 if otherwise
 *
 * Desc:  is lower
 *
 *@c: parameters in ascii code
 *
 * Return :0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
