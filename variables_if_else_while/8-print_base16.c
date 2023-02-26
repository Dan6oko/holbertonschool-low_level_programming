#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 if the program completed successfully, otherwise a non-zero value.
*/
int main(void)
{
int i;
for (i = 0;  i <= 9; i++)
{
putchar(i + '0');
}
for (i = 0; i <= 6; i++)
{
putchar(i + 'a');
}
putchar('\n');
return (0);
}
