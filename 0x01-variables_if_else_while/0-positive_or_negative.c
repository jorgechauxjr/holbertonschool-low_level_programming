#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - it is where the program start
 *
 *Description: a random number is generated and at the end
 *it prints if is positive, negative or zero
 *Return: positive or negative
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
else
{
if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
if (n < 0)
{
printf("%d is negative\n", n);
}
}
}
return (0);
}
