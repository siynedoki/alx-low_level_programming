#include "main.h"
/**
 * _abs - computes the absolute value of a number
 * @x: inputed integer
 * Return: int
 */

int _abs(int x)
{

	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	return (0);
}
