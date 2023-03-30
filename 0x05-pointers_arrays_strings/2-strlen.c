/**
 * _strlen  - change value of to integers
 * @s: a pointer to a String
 * Return: tength of s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
