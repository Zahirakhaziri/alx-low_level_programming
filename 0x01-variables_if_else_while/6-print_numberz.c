#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print the numbers from 0 to 9 using putchar, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

	return (0);
}
