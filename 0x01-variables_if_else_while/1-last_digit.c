#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry code
 *
 * Return: 0 Awalys
*/
int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	printf("the last digit of %d is %d", n, l_digit);
	return (0);
}
