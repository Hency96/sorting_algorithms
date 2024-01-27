#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @z: The first integer to swap.
 * @x: The second integer to swap.
 */
void swap_ints(int *z, int *x)
{
	int tmp;

	tmp = *z;
	*z = *x;
	*x = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *mini;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		mini = array + i;
		for (j = i + 1; j < size; j++)
			mini = (array[j] < *mini) ? (array + j) : mini;

		if ((array + i) != mini)
		{
			swap_ints(array + i, mini);
			print_array(array, size);
		}
	}
}
