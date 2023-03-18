#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: use function puts() to print alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 25; i >= 0; i--)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
