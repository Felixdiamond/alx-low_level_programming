#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL if value
 * is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *prev;

    if (!list)
        return (NULL);

    /* Traverse the list using the "express lane" */
    current = list;
    while (current->express && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n",
               current->express->index, current->express->n);
        current = current->express;
    }

    /* Perform linear search between current node and end of the list */
    prev = current;
    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        prev = current;
        current = current->next;
    }

    /* Check if the value was found */
    if (current && current->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        return (current);
    }

    /* The value was not found */
    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, current ? current->index : 0);
    while (prev && prev->index <= (current ? current->index : 0))
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

