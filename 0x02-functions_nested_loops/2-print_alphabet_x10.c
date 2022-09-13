#include "main.h"

/**
 * main - entry point
 *
 * desc : print the alphabets 10 times
 *
 * return : void
 *
 */

void print_alphabet_x10(void)
{
	int I , J;

	for (I = 0; I < 10; I++)
	{
		for (J = 'a'; J <= 'z'; J++)
		{
			_putchar(J);
		}
	}
	_putchar('\n');
}
