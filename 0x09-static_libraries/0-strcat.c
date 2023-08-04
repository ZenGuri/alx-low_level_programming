#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenation resutl of dest and src
 */
char *_strcat(char *dest, char *src)
{
	int c_d = 0; /* counter for dest */
	int c_s = 0; /* counter for src */

	while (*(dest + c_d) != '\0')
	{
		c_d++;
	}

	while (*(src + c_s) != '\0')
	{
		*(dest + c_d) = *(src + c_s);
		c_d++;
		c_s++;
	}
	*(dest + c_d + 1) = '\0';
	return (dest);
}
