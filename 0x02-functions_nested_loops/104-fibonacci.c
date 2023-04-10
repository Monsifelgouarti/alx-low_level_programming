#include <stdio.h>
/**
 * main(void)? (- print fibonacci)
 * Description: print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	char fibo[];
	int i;
	long int fn_1 = 1, fn_2 = 0, f = 0, sum = 0;

	for (i = 2; i <= 98; i++)
	{
		f = fn_2 + fn_1;
		if ((f % 2) == 0)
			sum = sum + f;
		fn_2 = fn_1;
		fn_1 = f;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
