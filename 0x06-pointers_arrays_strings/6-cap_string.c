#include <stdio.h>
/**
 * *cap_string - changes first letter of each word
 * @str: String
 * Return: string of uppercase.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		switch (*(str + i))
		{
		case ' ' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '\n' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '\t' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;	
		case ',' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case ';' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '.' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '!' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '?' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '"' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '(' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case ')' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '{' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		case '}' :
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			*(str + i + 1) = *(str + i + 1) - 32;
			break;
		default :
			break;
		}

		i++;
	}

	return (str);
}
