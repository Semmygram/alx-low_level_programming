#include "main.h"

/**
 * print_line - print a straight line 
 *
 * @n : length of the line 
 *
 * return : void 
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
