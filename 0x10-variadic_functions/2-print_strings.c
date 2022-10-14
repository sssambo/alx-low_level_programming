#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function to receice strings and print them
 * @separator: character type
 * @n: int number of arguments
 *
 * Return : Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int number;
	va_list lists;
	char *strg;

	va_start(lists, n);

	for (number = 0; number <= n; number++)
	{
		strg = va_arg(lists, char *);
		if (strg)
			printf("%s", strg);
		else
			printf("(nil)");

		if (separator && number != n - 1)
			printf("%s", separator);
	}
		va_end(lists);
		printf("\n");
}
