#include <stdio.h>

/**
 * main - Entry point of code
 * Return: 0 Always (Success)
*/

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if
			(p != 'q' && p != 'e')
			{
				putchar(p);
			}
		}
	putchar('\n');
	return (0);
}
