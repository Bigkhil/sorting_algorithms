#include "sort.h"
/**
 * bubble_sort - sort the array using bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int check = 0, temp = 0;
	size_t i = 0, j = 0;

	if (array)
	{
		for (i = 0 ; i < (size - 1) ; i++)
	{
		for (j = 0 ; j < (size - 1 - i) ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				check = 1;
				print_array(array, size);
			}
		}
		if (check == 0)
			break;
	}
	}
}
