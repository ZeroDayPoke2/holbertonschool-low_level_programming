#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: 'betty compliant example'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int stringLength = 0;
	char sArr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	stringLength = strlen(sArr);
	write(2, sArr, stringLength);
	return (1);
}
