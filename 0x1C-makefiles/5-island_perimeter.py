#!/usr/bin/python3
""" this is a module """


def island_perimeter(grid):
    """ god is death we christians killed it """
    total = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if not grid[i - 1][j] or grid[i - 1][j] == 0:
                    total = total + 1
                if not grid[i][j + 1] or grid[i][j + 1] == 0:
                    total = total + 1
                if not grid[i + 1][j] or grid[i + 1][j] == 0:
                    total = total + 1
                if not grid[i][j - 1] or grid[i][j - 1] == 0:
                    total = total + 1
    return total
