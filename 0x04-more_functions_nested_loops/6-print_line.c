#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print'_'
 * Return: a straight
 */
void print_line(int n)
{
	int co;

	if (in <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
