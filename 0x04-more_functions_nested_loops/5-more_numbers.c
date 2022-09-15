#include "main.h"

/**
 * more_numbers - print 0- 14 10 times
 *
 * return : no  return
 */

void more_numbers(void)
{
	int i = 0, j;

	for (i = '0'; i < '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
