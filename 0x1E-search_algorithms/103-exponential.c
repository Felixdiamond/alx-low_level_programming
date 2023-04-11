#include <math.h>
#include "search_algos.h"

int binary_search(int *array, size_t low, size_t high, int value);
void print_array(int *array, size_t low, size_t high);

int exponential_search(int *array, size_t size, int value)
{
    size_t i = 1;
    size_t low;
    size_t high;

    if (array == NULL)
        return (-1);

    while (i < size && array[i] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i *= 2;
    }

    low = i / 2;
    high = (i < size) ? i : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    return (binary_search(array, low, high + 1, value));
}

int binary_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    while (low < high)
    {
        print_array(array, low, high - 1);
        mid = (low + high) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid;
    }

    return (-1);
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
