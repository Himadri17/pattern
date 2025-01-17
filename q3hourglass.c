#include<stdio.h>
//que3 hourglass pattern for n=5
int main(){
    int i,sp,j;
    for(i=5;i>=1;i--){
        for(sp=1;sp<=5-i;sp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",64+j);
        }
        printf("\n");

    }
      for(i=2;i<=5;i++){
        for(sp=1;sp<=5-i;sp++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",64+j);
        }
        printf("\n");

    }
}
