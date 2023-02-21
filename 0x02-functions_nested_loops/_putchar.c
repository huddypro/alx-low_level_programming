#include "main.h"
#include <unistd.h>
/**
*_putchar - writes te character c to stdout
* @c: The chaacter to print
*
* Return: on Success 1.
* On error, -1 is returned, and error is set to appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
} 
