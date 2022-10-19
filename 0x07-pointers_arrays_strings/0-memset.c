#include "main.h"


/**
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byt
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s
 *        * Return: Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
