#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the alphabet in reverse, from 'z' to 'a'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}

