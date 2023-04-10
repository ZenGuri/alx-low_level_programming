#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0, cpt = 0;

	while (1)
	{
		num = *(s1 + cpt) - *(s2 + cpt);
		if (num || (*(s1 + cpt) == '\0' && *(s2 + cpt) == '\0'))
			break;
		cpt++;
	}
	return (num);
}
