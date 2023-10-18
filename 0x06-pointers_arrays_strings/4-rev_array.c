/**
 * reverse_array - Reverses the content of an array.
 * @a: the array.
 * @n: the amount of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, k, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
	k = a[i];
	a[i] = a[j];
	a[j] = k;
	}
}

