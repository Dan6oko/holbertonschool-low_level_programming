#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 if the program completed successfully, otherwise a non-zero value.
*/
int main(void)
{
int i;
putchar ('0');
for (i = 1; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
