#include <stdio.h>
#include <stdlib.h>
/**
 *  print_name- a function that print a name
 * @name: the name to be printed
 * @f: a pointer to a function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
