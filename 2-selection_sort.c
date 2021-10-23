#include "sort.h"

/**
 * swap - swapping two elements of the array
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
 * selection_sort - sorting using selection algorithm
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
int *min;
size_t i = 0, j;
if (array == NULL || size < 2)
return;
while (i < size - 1)
{
min = array + i;
j = i + 1;
while (j < size)
{
if (array[j] < *min)
min = array + j;
j++;
}
if ((array + i) != min)
{
swap(array + i, min);
print_array(array, size);
}

i++;
}
}
