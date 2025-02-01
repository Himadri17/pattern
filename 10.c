#include <stdio.h>
//que10 for n=5
void printNumberMaze(int n) {
    int maze[n][n];  
    int x = n / 2, y = n / 2;  // Start from the center
    int num = 1, step = 1;

    maze[x][y] = num++;  

    while (num <= n * n) {
        // Move Right
        for (int i = 0; i < step && num <= n * n; i++) maze[x][++y] = num++;
        // Move Down
        for (int i = 0; i < step && num <= n * n; i++) maze[++x][y] = num++;
        
        step++; 
        
        // Move Left
        for (int i = 0; i < step && num <= n * n; i++) maze[x][--y] = num++;
        // Move Up
        for (int i = 0; i < step && num <= n * n; i++) maze[--x][y] = num++;

        step++; 
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", maze[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an odd size for the maze: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number!\n");
        return 1;
    }

    printNumberMaze(n);
    
    return 0;
}
