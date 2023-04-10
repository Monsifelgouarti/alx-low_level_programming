#include <stdio.h>
/**
 * main(void)? (- print fibonacci)
 * Description: print the first 98 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int fn_1 = 1, fn_2 = 0, f = 0;

	printf("%lu, ", fn_1);
	printf("%lu, ", fn_2);
	for (i = 2; i <= 98; i++)
	{
		f = fn_2 + fn_1;
		printf("%lu, ", f);
		fn_2 = fn_1;
		fn_1 = f;
		if (i < 98)
		printf(", ");
	}
	printf("\n");
	return (0);
}
