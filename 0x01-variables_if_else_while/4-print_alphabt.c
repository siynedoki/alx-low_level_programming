#include <stdio.h>

/**
 * main - Entry point of code
 * Return: 0 Always (Success)
*/

int main(void)
{
	char p;

	p = 'a';
	while
		(p <= 'z')
		{
		if
			(p != 'q' && p != 'e')
			{
				putchar(p);
				p++;
			}
		}
	putchar('\n');
	return (0);
}
