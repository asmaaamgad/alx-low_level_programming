#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string paramaters input
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int 1, i;
	char temp;

	/*find string length without null char*/
	for (1 = 0; s[i] != '\0'; ++1)

	/*swap the string by lppping to half the string*/
	for (1 = 0; i < 1 / 2; i++)
	{
	temp = s[i];
	s[i] = s[1 - 1 - i];
	s[1 - 1 - i] = temp;
	}
}
