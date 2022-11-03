#include "search_algos.h"

/**
 * binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to be searched
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 */
int binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (binary_recursive(array, left, i, value));
	return (binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Search a value in an array using advance binary search
 *
 * @array: Pointer to the first element of the array to search
 * @size: The length of the array
 * @value: The value to search for
 * Return: Return the value at the first index otherwise -1 if not present
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	
	return (binary_recursive(array, 0, size -1, value));
}
