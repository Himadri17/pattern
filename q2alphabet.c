#include<stdio.h>
int main(){
int i,j;
 for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+j);

        }
        int sp=2*(5-i);
        for(j=1;j<=sp;j++){
            printf(" ");

        }
        for(j=i;j>=1;j--){
            printf("%c",64+j);
        }
        printf("\n");

    }
}