#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                         using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if value is not present
 *         in array or if array is NULL
 */

int interpolation_search(int *array, size_t n, int value) {
size_t low = 0, high = n - 1;

if (!array || n == 0) return -1;

while (low <= high && value >= array[low] && value <= array[high]) {
    size_t pos = interpolationProbe(array, low, high, value);
    printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
    if (array[pos] == value) return pos;
    
    if (array[pos] < value) low = pos + 1;
    else high = pos - 1; 
}

printf("Value not found\n");
return -1; 
}
