<<<<<<< HEAD
#include *main.h*
/**
  * main - Entry point 
  * Description:'prints _putchar to stdout'
  * Return: always 0
  */
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');  
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
=======
#include <unistd.h>
#include "main.h"

int _putchar(char c)
{
  return write(1, &c, 1);
}

int main(void)
{
  char *str = "_putchar\n";
  int i;

  for (i = 0; str[i] != '\0'; i++)
  {
    _putchar(str[i]);
  }

  return 0;
>>>>>>> 2b4b9fde863b65d95d1d72acc61e116b1b7157e6
}
