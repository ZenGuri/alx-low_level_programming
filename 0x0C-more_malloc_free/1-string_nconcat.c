#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: pointer to char
 * @s2: pointer to char
 * @n: unsigned int
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len, s;

	i = j = len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	s = (len + n) * sizeof(*new_str);
	new_str = malloc(s + 1);
	if (new_str == NULL)
		return (NULL);
	while (i < s && s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < s && s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
