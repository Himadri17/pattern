#include<stdio.h>
//ques 7 for n=3
int main(){
    int i,j,t,sp;
    for(t=0;t<3;t++){
        for(i=0;i<3;i++){
            for(sp=0;sp<3*t;sp++){
                printf(" ");
            }
            for(j=0;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}