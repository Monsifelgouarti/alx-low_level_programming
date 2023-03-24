#include <stdio.h>
/**
 * main(void)? (- print sum of even fibonacci)
 * Description: print the sum of even-valued fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long int fn_1 = 1, fn_2 = 0, f = 0, sum = 0;

	while (f < 4000000)
	{
		f = fn_2 + fn_1;
		if ((f % 2) == 1)
			sum = sum + f;
		fn_2 = fn_1;
		fn_1 = f;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
