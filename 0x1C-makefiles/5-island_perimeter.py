#!/usr/bin/python3


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid"""

    hg = len(grid)
    wd = len(grid[0])
    island = 0
    edges = 0

    for i in range(hg):
        for j in range(wd):
            if grid[i][j] == 1:
                island += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges = edges + 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges = edges + 1
    return (island * 4) - (edges * 2)
