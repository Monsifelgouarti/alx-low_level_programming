#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main(void)? (-last digets)
 * Description: print the last digit of the number
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	if (last_digit == 0)
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
