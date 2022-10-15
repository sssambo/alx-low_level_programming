#include "main.h"
/**
 * print_rev - reverse string in stdout
 * @s: char pointer
 *
 * Return: void through
 */
void print_rev(char *s)
{
	int size;

	size = 0;
	while (s[size] != '\0')
	size++;
	while (size >= 0)
	{
		putc(s[size], stdout);
		size--;
	}
}
