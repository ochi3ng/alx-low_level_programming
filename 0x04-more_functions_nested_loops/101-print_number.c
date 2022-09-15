#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int j;
	int a, b;

	b = 10;

	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar (n + '0');
	}

	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		j = n;
		while (j / b > 9)
		{
			b = b * 10;
		}
		while (b > 0)
		{
			a = j / b;
			j = j % b;
			_putchar (a + '0');
			b = b / 10;
		}
	}
}
		

