#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
