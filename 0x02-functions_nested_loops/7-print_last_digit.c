/**
 * print - Entry code
 *
 * Return: last digit
*/

int print_last_digit(int num)
{

	int last_digit;

	if (num < 0)  /* convert negative numbers to positive */
		num = -num;

	last_digit = num % 10;
	_putchar('0' + last_digit);

	return (last_digit);
}
