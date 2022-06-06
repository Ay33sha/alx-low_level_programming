#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;

while (ch <= 99)
{
putchar(ch / 10 + '0');
putchar(ch % 10 + '0');
if (ch != 99)
{
putchar(',');
putchar(' ');
}
ch++;
}
putchar('\n');

return (0);
}
