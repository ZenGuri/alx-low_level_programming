#include "main.h"
/**
 * _strncat - concat two with number of bytes
 * @dest: first string
 * @src: second string
 * @n: number of byte
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int cpt = 0;
	int cpt2 = 0;

	while (*(dest + cpt))
	{
		cpt++;
	}
	while (*(src + cpt2))
	{
		*(dest + cpt) = *(src + cpt2);
		if (cpt2 == n)
			break;
		cpt++;
		cpt2++;
	}
	*(dest + cpt) = '\0';
	return (dest);
}
