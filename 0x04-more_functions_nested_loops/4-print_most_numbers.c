#include "main.h"

/**
 * print_most_numbers - print numbers thru 0 - 9 minus 2 nd 4
 *
 * Return : 0 on sucess
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 || i != 52)
		_putchar(i);
	}
	_putchar('\n');
}
