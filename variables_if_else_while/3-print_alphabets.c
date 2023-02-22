#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 if the program completed successfully, otherwise a non-zero value.
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
