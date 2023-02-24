#!/bin/usr/python3

def island_perimeter(grid):

    perimeter = 0
    
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[i - 1][j] = 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
        print(perimeter)

 grid = [
         [0, 0, 0, 0, 0, 0],
         [0, 1, 0, 0, 0, 0],
         [0, 1, 0, 0, 0, 0],
         [0, 1, 1, 1, 0, 0],
         [0, 0, 0, 0, 0, 0]
         ]
     
 print(island_perimeter(grid))
     

