#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL; // Check for invalid input
    }

    // Allocate memory for an array of pointers (rows)
    int **grid = (int **)malloc(height * sizeof(int *));
    
    if (grid == NULL) {
        return NULL; // Memory allocation failed
    }

    // Allocate memory for each row and initialize elements to 0
    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        
        if (grid[i] == NULL) {
            // Memory allocation for a row failed, clean up and return NULL
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0; // Initialize elements to 0
        }
    }

    return grid; // Return the pointer to the 2-dimensional array
}

