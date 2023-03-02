#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the maximum value for the times table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
				printf("%d", result);
			else
				printf(", %d", result);
		}
		printf("\n");
	}
}

