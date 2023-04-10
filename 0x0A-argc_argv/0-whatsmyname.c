#include <stdio.h>
#include "main.h"

/**
 * main - this program prints its name
 * @argc: integer
 * @argv: array of pointers to char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
