#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char charArr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(charArr[i]);
	}
	putchar('\n');
	return (0);
}
