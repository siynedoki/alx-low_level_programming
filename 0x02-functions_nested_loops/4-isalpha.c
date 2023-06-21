#include "main.h"

/**
 * _isalpha - validates if a character is a letter,
 * upper or lower case
 *
 * @c: to be expressed in ASCI value of charaster
 * Return: 1 (succesful) else, 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
