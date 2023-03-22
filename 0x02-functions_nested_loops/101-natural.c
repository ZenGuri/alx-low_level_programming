#include <stdio.h>
/**
 * main - Nature made the natural numbers; All else is the work of women
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}
