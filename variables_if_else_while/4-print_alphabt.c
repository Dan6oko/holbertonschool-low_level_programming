#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 if the program completed successfully, otherwise a non-zero value.
*/

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
