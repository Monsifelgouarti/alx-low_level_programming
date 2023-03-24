#include <stdio.h>
/**
 * void main(void);? (- print somme)
 * Description: print the sum of all the multiples 
 * of 3 or 5 below 1024
 * Return: 0
 */
void main(void)
{
	int i, j, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
