#!/usr/bin/python3

"""This module contains a function that calculates the perimeter 
    of a island grid.
    The function island_perimeter(grid) uses a checkit.
    grid is a list of list of integers
    0 rep water
    1 rep land
    A cell is square of length 1

    Check alx-0x1C-makefile task 5 for more info
"""

def checkit(grid=[[0,0],[0,0]]):
    """Checker for checking where there is land 
    or water for easy calculation

    returns
    res list of list : list showing ON and OFF for land 
    and water respectively.
    row int : width of grid
    col int : length of grid

    """
    checker = []
    check = []
    row = 0
    col = 0

    for lst in grid:
        row += 1 
        for item in lst:
            col += 1
            if item == 1:
                checker.append("ON")
            else:
                checker.append("OFF")
        check.append(checker)
        checker = []
    return (check,row,col//row)

def island_perimeter(grid):
    """Calculates the perimeter of the grid

    Return
    perimeter int : The perimeter of the island

    """
    res,row,col = checkit(grid)
    reslist = []
    re = 4
    perimeter = 0
    for lst in range(1, row):
        for item in range(1, col):
            if grid[lst][item] == 1:
                for n in (-1, 1):
                    if res[lst + n][item] == "ON":
                        re -= 1
                for y in (-1, 1):
                    if res[lst][item + y] == "ON":
                        re -= 1
                reslist.append(re)
                re = 4

    for i in reslist:
        perimeter += i
    return (perimeter)




if __name__ == "__main__":
    grid = [[0,0,0,0,0,0],
            [0,1,0,0,0,0],
            [0,1,0,0,0,0],
            [0,1,1,1,0,0],
            [0,1,1,1,1,0],
            [0,0,0,1,1,0],
            [0,0,0,0,0,0]
            ]
    island_perimeter(grid)

