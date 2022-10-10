/**
 * swap_int - Swaps int a for int b
 *
 * @a: Primary integer, becomes second
 * @b: Secondary integer, becomes first
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
