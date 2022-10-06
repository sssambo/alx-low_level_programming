/**
 * swap function
 * @int a: pointer
 * @int b: pointer
 * dereferencing and swap
 */

void swap_init(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
