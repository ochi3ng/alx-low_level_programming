#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int count = 0;
	char Alph;

	while (count++ <= 9)
	{
		for (Alph = 'a'; Alph <= 'z'; Alph++)
			_putchar(Alph);
		_putchar('\n');
	}
}
