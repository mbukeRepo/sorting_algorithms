#include "sort.h"
/**
 * swap - swaps two pointers
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * partition - partitions the array and sort it some way
 * @arr: array to partition
 * @size: size of the array
 * @l: left side of the array
 * @r: right side of the array
 * Return: new location of the pivot
 */
int partition(int *arr, size_t size, int l, int r)
{
int below, above;
int *pivot = arr + r;
for (below = above = l; below < r; below++)
{
if (arr[below] < *pivot)
{
if (above < below)
{
swap(arr + above, arr + below);
print_array(arr, size);
}
above++;
}
}

if (arr[above] > *pivot)
{
swap(arr + above, pivot);
print_array(arr, size);
}
return (above);
}
/**
 * lomuto_sort - imprements quick sort
 * @arr: array to sort
 * @size: size of the array
 * @l: left side of the array
 * @r: right side of the array
 */
void lomuto_sort(int *arr, size_t size, int l, int r)
{
int pivot;
if (l >= r)
return;
pivot = partition(arr, size, l, r);
lomuto_sort(arr, size, l, pivot - 1);
lomuto_sort(arr, size, pivot + 1, r);
}

/**
 * quick_sort - array imprementation of quick sort
 * @array: array to sort
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
lomuto_sort(array, size, 0, size - 1);
}
