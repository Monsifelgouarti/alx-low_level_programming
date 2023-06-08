int _strlen_recursion(char *s);
/**
 * wildcmp - compare two strings
 * @s1: a string
 * @s2: a string
 * Return: reurn 1 if the two strings is identical otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*' || *s1 == '\0')
			s2++;
		else if (*s1 == *(s2 + 1))
			s2++;
		else if (*s1 != *(s2 + 1))
			s1++;
		return (wildcmp(s1, s2));
	}
	else
		return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: a string
 * Return: the length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
