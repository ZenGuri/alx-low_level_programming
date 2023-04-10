#include "main.h"
/**
 * _strcat - concat two
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
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
		cpt++;
		cpt2++;
	}
	*(dest + cpt) = '\0';
	return (dest);
}
