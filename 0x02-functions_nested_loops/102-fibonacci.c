#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int tmp, prev, new;
	int n;

	n = 1;
	prev = 1;
	new = 2;
	printf("%ld, %ld, ", prev, new);

	while (n <= 48)
	{
		tmp = new;
		new = new + prev;
		prev = tmp;
		printf("%ld", new);
		if (n != 48)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
