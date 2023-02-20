#include <stdio.h>

/**
 * main - Entry code
 *
 * Return: 0 Always
*/
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
