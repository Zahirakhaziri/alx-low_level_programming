#include<stdio.h>
/**
<<<<<<< HEAD
  *main - Entry point
  *Description 'print alphabets except q and e'
  *Return: Always 0
  */
=======
 * main - Entry point
 * Description 'Print the alphabets excluding q and e'
 *
 * Return: Always 0 (Success)
 */
>>>>>>> 2204bb080d66004f17555774a000a03cdb8d57d8
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');

