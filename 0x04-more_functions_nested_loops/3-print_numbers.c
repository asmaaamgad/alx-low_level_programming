#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line.
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
{
	_putchar(n + '0');
	n++;
}
	_putchar('\n');
}
