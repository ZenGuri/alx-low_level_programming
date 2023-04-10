#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpt = 0;

	while (cpt < n && *(src + cpt))
	{
		*(dest + cpt) = *(src + cpt);
		cpt++;
	}
	while (cpt < n)
	{
		*(dest + cpt) = '\0';
		cpt++;
	}

	return (dest);
}
