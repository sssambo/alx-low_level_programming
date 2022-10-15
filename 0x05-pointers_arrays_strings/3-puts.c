#include "main.h"
/**
 * _puts - function to print a string followed by new line \n
 *
 * @str: char
 *
 * Return : nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putc(str[i], stdout);
		i++;
	}
	putc('\n', stdout);
}
