#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using
 * the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if
 * value is not present or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, step;
    listint_t *prev, *node;

    if (!list || size == 0)
        return (NULL);

    jump = sqrt(size);
    prev = node = list;
    while (node->index < size && node->n < value)
    {
        prev = node;
        step = jump;
        while (step > 0 && node->next)
        {
            node = node->next;
            step--;
        }
        printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
    }
    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, node->index);
    while (prev->index < size && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev == node)
            return (NULL);
        prev = prev->next;
    }
    if (prev->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        return (prev);
    }
    return (NULL);
}

