#include "search_algos.h"

void print_array(int *array, size_t low, size_t high);

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (recursive_search(array, 0, size - 1, value));
}

int recursive_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (low > high)
        return (-1);

    print_array(array, low, high);
    mid = (low + high) / 2;
    if (array[mid] == value && (mid == low || array[mid - 1] != value))
        return (mid);
    else if (array[mid] >= value)
        return (recursive_search(array, low, mid - 1, value));
    else
        return (recursive_search(array, mid + 1, high, value));
}

void print_array(int *array, size_t low, size_t high)
{
    printf("Searching in array: ");
    while (low <= high)
    {
        printf("%d", array[low]);
        if (low != high)
            printf(", ");
        low++;
    }
    printf("\n");
}

