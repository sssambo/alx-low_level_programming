#include "variadic_functions.h"
/**
 * print_numbers - a function that prints its argument with a separator
 * @separator: char
 * @n: int
 *
 * Return: noting
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lip;
	int cass;
	unsigned int num;

	num = n;
	va_start(lip, n);
	while (num != 0)
	{
	cass = va_arg(lip, int);
	printf("%d,", cass);
	num--;
	if (separator && num != n - 1)
		printf("%s", separator);

	}
	va_end(lip);
	printf("\n");
}
