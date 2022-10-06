/**
 * swap function
 * @int a: pointer
 * @int b: pointer
 * dereferencing and swap
 * no return
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
