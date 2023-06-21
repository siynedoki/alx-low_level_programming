#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: 0 (successful)
 */

void print_alphabet_x10(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
		{
		for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
			}

		_putchar('\n');
		}
}
