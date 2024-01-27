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
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, lent = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < lent - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		lent--;
	}
}
