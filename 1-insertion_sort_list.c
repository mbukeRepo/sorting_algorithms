#include "sort.h"

/**
 * swap - swaps two nodes
 * @h: head of the list
 * @n1: insert node
 * @n2: iter node
 */
void swap(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
n2->next->prev = *n1;

n2->next = *n1;
n2->prev = (*n1)->prev;

if ((*n1)->prev != NULL)
(*n1)->prev->next = n2;
else
*h = n2;

(*n1)->prev = n2;
*n1 = n2->prev;
}

/**
 * insertion_sort_list - insertion sort implementation function
 * @list: head of the list
 */

void insertion_sort_list(listint_t **list)
{
listint_t *insert, *tmp, *iter;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

iter = (*list)->next;
while (iter != NULL)
{
tmp = iter->next;
insert = iter->prev;

while (insert != NULL && iter->n < insert->n)
{
swap(list, &insert, iter);
print_list((const listint_t *)*list);
}
iter = tmp;
}
}
