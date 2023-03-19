#include<stdio.h>
/**
 * main(void)? (- Display a quote)
 * Description: Print a message to standar error
 * Return: 0
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(&quote, sizeof(quote), 1, stderr);
	return (1);
}
