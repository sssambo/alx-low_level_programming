#include <stdarg.h>
/**
 * sum_them_all - function to print all the specified arguments
 * @n: int specifier
 *
 * Return: accum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int count;
	int accum;

	if (n == 0)
	return (0);

	count = n;
	accum = 0;
	va_start(list, n);
	while (count != 0)
	{
		accum += va_arg(list, int);
		count--;
	}
	va_end(list);
	return (accum);
}
