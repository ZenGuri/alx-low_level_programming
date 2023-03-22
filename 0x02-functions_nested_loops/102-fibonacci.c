#include <stdio.h>
/**
 * main - First 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
int cpt;
unsigned long fib1 = 0, fib2 = 1, sum;
for (cpt = 0; cpt < 50; cpt++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (cpt == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
