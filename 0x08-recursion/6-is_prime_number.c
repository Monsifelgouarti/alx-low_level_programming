#include <stdio.h>
int prime_number(int n, int y);
/**
 * is_prime_number - reurn 1 if the input number is a prime number
 * @n: a number
 * Return: 1 if @n is a prime number or 0.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (prime_number(n, 1));
}
/**
 * prime_number - test if @y divide @n.
 * @n: a number
 * @y: a number
 * Return: 1 if @n is a prime number or 0 .
 */
int prime_number(int n, int y)
{
	if (y < n && (n % y) == 0)
		return (0);
	if (y == (n / 2) && (n % 2) == 0)
		return (1);
	else
		return (prime_number(n, y + 1));
}
