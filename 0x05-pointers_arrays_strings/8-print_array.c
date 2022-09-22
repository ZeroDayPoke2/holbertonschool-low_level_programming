#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of a int array
 * @a: array of ints
 * @n: number of elements to print to SO
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", *(a + i));
		}
		printf("%d\n", *(a + i));
	}
	else
	{
		printf("\n");
	}
}
