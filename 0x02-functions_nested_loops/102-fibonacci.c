#include <stdio.h>
/**
 * main(void);? (- print fibonacci)
 * Description: print the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	long int fn_1 = 1, fn_2 = 0, f;

	for (i = 2; i <= 51; i++)
	{
		f = fn_2 + fn_1;
		printf("%ld", f);
		fn_2 = fn_1;
		fn_1 = f;
		if (i < 51)
		printf(", ");
	}
	printf("\n");
	return (0);
}
