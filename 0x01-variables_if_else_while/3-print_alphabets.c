#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: use function puts() to print alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHABET[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < 26; i++)/*loop to print lowercase*/
		putchar(alphabet[i]);
	for (i = 0; i < 26; i++)/* loop to print UPPERCASE*/
		putchar(ALPHABET[i]);
	putchar('\n');
	return (0);
}
