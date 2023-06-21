#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * Return: int
 */

int _abs(int x)
{

	if (x >= 0)
	{
		_putchar (x);
	}
	else 
	{
		_putchar( x * -1);
	}
	return (0);
}
