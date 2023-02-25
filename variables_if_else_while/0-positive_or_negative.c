#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point for the program
*
* Description: This function prompts the user to enter an integer,
*              then checks whether the integer is positive or negative.
*              It prints a message to the console indicating the result.
*
* Return: 0 if successful, non-zero if there was an error
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
