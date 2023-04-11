#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int low = 0, high = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        printf("Searching in array: ");
        for (mid = low; mid < high; mid++)
            printf("%d, ", array[mid]);
        printf("%d\n", array[mid]);

        mid = (low + high) / 2;

        if (array[mid] < value)
            low = mid + 1;
        else if (array[mid] > value)
            high = mid - 1;
        else
            return (mid);
    }

    return (-1);
}

