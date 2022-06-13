#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an inputed number of elements of array of integers
 * @a: input array.
 * @n: input n elements.
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
