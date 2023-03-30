/**
 * swap_int - change value of to integers
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
