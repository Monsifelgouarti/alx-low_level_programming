#include <stdio.h>
#include <stdlib.h>
/**
 *  op_add - a function that return the sum of a and b
 * @a: operand a
 * @b: operand b
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *  op_sub - a function that return the difference of a and b
 * @a: operand a
 * @b: operand b
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  op_mul - a function that return the product of a and b
 * @a: operand a
 * @b: operand b
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  op_div - a function that return the rusult of the division of a by b
 * @a: operand a
 * @b: operand b
 * Return: division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *  op_mod - a function that return the remainder of the division of a by b
 * @a: operand a
 * @b: operand b
 * Return: remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
