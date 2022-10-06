/**
 * swap_int - takes two arguments and swap them
 *
 * @a: int pointer parameter
 * @b: int pointer parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
