#!/usr/bin/python3
def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid:
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or none).
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island)."""

    no_island = False
    height = 0
    width = 0
    for row in grid:
        if 1 in row:
            height += 1
            max_one = row.count(1)
            if max_one > width:
                width = max_one
            no_island = True

    if no_island is False:
        return 0
    else:
        return (height + width) * 2
