#include "main.h"
/**
 * print_times_table - multiplication-table
 * @n: number
 */
void print_times_table(int n)
{
int d, row, prod;

if (n >= 0 && n <= 15)
{
for (d = 0; d <= n; d++)
{
_putchar('0');
for (row = 1; row <= n; row++)
{
_putchar(',');
_putchar(' ');
prod = d * row;
if (prod <= 99)
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
