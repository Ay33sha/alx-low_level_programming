#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int n = 0;

while (n <= 99)
{
putchar(n % 10 + '0');
putchar(n % 10 + '0');
if (n != 99)
{
putchar(',');
putchar('\n');
}
n++;
}

return (0);
}
