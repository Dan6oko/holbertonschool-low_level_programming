#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 if the program completed successfully, otherwise a non-zero value.
 */
int main(void)
{
int n;
int R;
srand(time(0));
n = rand() - RAND_MAX / 2;
R = n % 10;
if (R > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, R);
}
else if (R == 0)
{
printf("Last digit of %d is %d and is 0\n", n, R);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, R);
 }
return (0);
}
