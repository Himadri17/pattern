#include <stdio.h>
//ques 4. Hollow square pattern
int main() {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("%d ", j + 1); 
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
