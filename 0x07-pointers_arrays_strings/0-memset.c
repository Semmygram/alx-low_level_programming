#include "main.h"

/**
 *_memset - fills memory with a constant byte,
 *@s: memory area
 *@b: constant byte
 *@n: bytes filled
 *Description: fill the first 'n' bytes of the memory by 'b'
 *return: return to dest
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
