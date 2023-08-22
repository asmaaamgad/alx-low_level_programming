#include "main.h"

/**
 * puts2 - print evry character of a srtring
 *
 * @str: paramater input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int;

	for (r = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
