#!/usr/bin/python3
"""returns the perimeter of the island"""


def island_perimeter(grid):
    """island perimeter"""
    x = len(grid)
    y = len(grid[0])
    i = 0
    for j in range(x):
        for k in range(y):
            if grid[j][k] == 1:
                i = i + 4
                if j > 0:
                    i = i - grid[j - 1][k]
                if j + 1 < len(grid):
                    i = i - grid[j + 1][k]
                if k > 0:
                    if grid[j][k - 1] == 1:
                        i = i - 1
                if k + 1 < len(grid[j]):
                    i = i - grid[j][k + 1]
    return i
