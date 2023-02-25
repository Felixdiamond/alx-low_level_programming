#!/usr/bin/python3
"""
Function that calculates the perimeter of an island in a grid
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the given grid.

    Args:
        grid (List[List[int]]): The grid of 0's and 1's.

    Returns:
        int: The perimeter of the island.

    Examples:
        >>> island_perimeter([[0, 0, 0, 0, 0, 0],
                              [0, 1, 0, 0, 0, 0],
                              [0, 1, 0, 0, 0, 0],
                              [0, 1, 1, 1, 0, 0],
                              [0, 0, 0, 0, 0, 0]])
        12
    """

    # Check if the input grid is empty
    if not grid:
        return 0

    # Initialize the perimeter to 0
    perimeter = 0

    # Traverse the grid and count the exposed sides
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check if the current cell has any neighboring 0's
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1  # Top side
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1  # Bottom side
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1  # Left side
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1  # Right side

    return perimeter
