#include "main.h"

/**
 * print_numbers - print numbers from 0 -9
 *
 * Return : no return value for this function
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
