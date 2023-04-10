#include <stdio.h>
#include "main.h"

/**
 * main - this program prints number of args passed into it
 * @argc: integer
 * @argv: array of pointers to char
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
