#!/usr/bin/python3
"""Module returns perimater of island described
in Grid"""


def island_perimeter(grid):
    """Method returns perimeter of island described
    in Grid"""
    n = 0
    for i, row in enumerate(grid):
        for j, element in enumerate(row):
            if element == 1:
                n += 1
            if j != len(row):
                if grid[i][j + 1] == 1
    perimeter = n * 2 + 2
    print(i)
    print(j)
    return perimeter
