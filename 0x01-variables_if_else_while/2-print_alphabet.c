#include <stdio.h>

/**
 * mai - enter point
 * Description : 'print alphapets lowercase
 * Retern: Always 0
*/
int main (void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
		putchar('\n');
	return (0);
}
