#include <stdio.h>
/**
 * beforemain - code executed before main
 *
 * Return: Always 0.
 */
void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
