#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 * Return: concatenation result
 */
char *_strncat(char *dest, char *src, int n)
{
	int c_d = 0;
	int c_s = 0;

	while (*(dest + c_d) != '\0')
	{
		c_d++;
	}

	if (n != 0)
	{
		while (*(src + c_s) != '\0')
		{
			*(dest + c_d) = *(src + c_s);
			if (c_s == n)
				break;
			c_d++;
			c_s++;
		}
	}
	*(dest + c_d) = '\0';

	return (dest);

}
