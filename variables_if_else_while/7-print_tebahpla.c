#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 if the program completed successfully, otherwise a non-zero value.
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
