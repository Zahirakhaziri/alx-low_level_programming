#include <stdio.h>

/**
 * main - Entry point
 *
 * This function prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}

