#include <main.h>

/**
 * print_ diagonal - print a diagonal line
 *
 * @n: is the numpers of times the \ character
 *
 *	should be printed
*/

void print_diagonal(int n);
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92); /*is equale to '/' char*/

			-putchar('\n');
		}
	}
}
