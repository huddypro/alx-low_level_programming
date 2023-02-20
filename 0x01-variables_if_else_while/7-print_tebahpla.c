#include <stdio.h>

/**
 * main - Entry code
 *
 * Return: 0 Always
*/

int main(void)
{
	char ch;


	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
