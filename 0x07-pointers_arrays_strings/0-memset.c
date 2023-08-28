#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: bytes of the memory area pointed
 * @s: function fills the first n bytes of the memory area pointed to by s
 * @b: char
 * return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < 0; r++, n--)
	{
	s[r] = b;
	}
	return (s);
}
