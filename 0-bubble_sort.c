#include "sort.h"
/**
 * bubble_sort - sort the array using bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i = 0, j = 0;

	for (i = 0 ; i < (size - 1) ; i++)
	{
		for (j = 0 ; j < (size - 1 - i) ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
