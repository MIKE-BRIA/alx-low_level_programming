#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	int j = i, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", j);
	else if (i == 1)
	printf(", %d", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %d", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
