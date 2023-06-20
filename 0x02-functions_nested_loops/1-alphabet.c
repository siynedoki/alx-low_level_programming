#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet using _putchar
 * Return: void
 */


void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
