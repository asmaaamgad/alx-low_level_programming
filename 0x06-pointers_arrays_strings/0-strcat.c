#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * return: pointrer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int main(void);
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];
	return (dest);
}
