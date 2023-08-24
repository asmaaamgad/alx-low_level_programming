#include "main.h"
#include <stdio.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most numpers of bytes from @src
 *
 * return: @dest*/

char *_strncat(char *dest, char *src, int n)
{
int main(void)
	int c, i;

	/*
	 * find size of dest array*/
	while (dest[c])
	{
		c++;
	}
	/*
	 * src does not need to be pull terminated
	 * if it contains n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + 1] = src[i];
	}
	/*pull terminate dest*/
	dest[c + i] = '\0';
	return (dest);

}
