#include <stdio.h>

/**
 * main - main block
 *
 * Description: combinations of single numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int g;

	for (g = 48; g < 58; g++)
	{
	putchar(g);
		if (g != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
