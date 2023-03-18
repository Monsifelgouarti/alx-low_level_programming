#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: use function puts() to print alphabet
 * except 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26; i++)/*loop to print lowercase*/
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
