#include <stdio.h>
//ques5 hollow hour glass, n=5 
int main() {
    int i, j,sp;
    for (i = 5; i >=1; i--) {
        for (sp= 1; sp <= 5- i; sp++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == 5) {
                printf("%c", 64+j); 
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++) {
        for (sp= 1; sp <= 5- i; sp++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == 5) {
                printf("%c", 64+j); 
            } else {
                printf(" "); 
            }
        }
        printf("\n");
    }

    return 0;
}


