#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);

void print_alphabet(void)
{
        int i;
        for (i = 'a'; i <= 'z'; i++)
        _putchart(i);
        _putchar('\n');
}
