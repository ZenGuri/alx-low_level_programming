#include "main.h"

/**
 * _isalpha - function that for alphabets
 *
 *@c is the parameter to be checked
 * Return 1 if it an alphabet lowercase or uppercase
 * and 0 in otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
