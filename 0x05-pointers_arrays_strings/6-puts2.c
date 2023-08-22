#include <stdio.h>

/**
 * puts2 - print every other character of a string
 *
 * @str: input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i % 2 == 0)
		putchar(str[i]);
	}
	putchar('\n');
}

int main(void)
{
	char myString[] = "Hello, World!";

	puts2(myString);

	return (0);
}
