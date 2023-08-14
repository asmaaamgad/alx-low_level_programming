#include <stdio.h>
/**
 * main - entry point
 * Description: 'print the alphabet in lowercase, and then in uppercase'
 * Return: Always 0
*/
int main(void)
{
	int n = 97;
	int s = 65;
	while (n <= 122)
	{
		putchar(n);
	}
	while (s <= 90)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
