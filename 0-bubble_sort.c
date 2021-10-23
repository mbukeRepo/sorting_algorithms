#include "sort.h"
/**
 * swap - swaps two integers
 * @a: pointer to first number
 * @b: pointer to the second number
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
/**
 * bubble_sort - sorts an array of numbers
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
int bubbly = 0;
size_t i = 0, len = size;

if (array == NULL || size < 2)
return;

while (bubbly == 0)
{
bubbly = 1;
while (i < len)
{
if (*(array + i) > *(array + i + 1))
{
swap(array + i, array + i + 1);
print_array(array, size);
bubbly = 0;
}
i++;
}
len--;
}
}
