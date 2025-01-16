#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");

        }
        int sp=2*(5-i);
        for(j=1;j<=sp;j++){
            printf(" ");

        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    for(i=5-1;i>=1;i--){
       for(j=1;j<=i;j++){
            printf("*");

        }
        int sp=2*(5-i);
        for(j=1;j<=sp;j++){
            printf(" ");

        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }  
    }

