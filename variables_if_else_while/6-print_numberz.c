#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: 0 if the program completed successfully, otherwise a non-zero value.
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
