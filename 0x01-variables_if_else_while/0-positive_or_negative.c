#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main (void)? (-test a number)
 * Description: test a random aumber is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		write(" %d is negative", &n);
	if (n > 0)
		write(" %d is positive", &n);
	if (n == 0)
		write(" %d is zero", &n);
	return (0);
}
