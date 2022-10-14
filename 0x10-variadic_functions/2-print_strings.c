#include "variadic_functions.h"
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
	char str[sizeof(lists)];

	va_start(lists, n);
	number = 0;
	for (number = 0; number <= n; number++)
	{
	str[sizeof(lists)] = {va_arg(lists, char)};
	if (str == NULL)
		str[sizeof(lists)] = "nil";
	printf("%sstr%c ", str, *separator);
	}
	printf("\n");
}
