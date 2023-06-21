#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: the character in ASCI value
 * Return: 1 (successful) 0 (unsuccesful)
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
