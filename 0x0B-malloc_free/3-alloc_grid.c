#include <stdio.h>
#include <stdlib.h>
/**
 * Memory allocation failed
*/
int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL; 
    }

    // Allocate memory for an array of pointers (rows)
    int **grid = (int **)malloc(height * sizeof(int *));
    
    if (grid == NULL) {
        return NULL; 
    }

    // Allocate memory for each row and initialize elements to 0
    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));
        
        if (grid[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }
        
        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

