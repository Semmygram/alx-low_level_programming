#include "main.h"
/**
 * print_sign - print the sign of a number
 * if the number is greater than zero
 * equals to or less than
 *
 * @n :positive or negative nunbers
 *
 *return: 1 or 0 or -1 depending on the output
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
