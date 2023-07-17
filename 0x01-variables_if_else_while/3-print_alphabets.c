
#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, followed by uppercase, all in one line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
  char lowercase;
char uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar(lowercase);

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar(uppercase);

putchar('\n');

    return (0);
}
