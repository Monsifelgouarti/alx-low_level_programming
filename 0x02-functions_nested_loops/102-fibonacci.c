#include <stdio.h>
/**
 * main(void);? (- print fibonacci)
 * Description: print the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long long int fn_1 = 1, fn_2 = 0, f;

	for (i = 2; i <= 50; i++)
	{
		f = fn_2 + fn_1;
		printf("%lld", f);
		fn_2 = fn_1;
		fn_1 = f;
		if (i < 50)
		printf(", ");
	}
	printf("\n");
	return (0);
}
