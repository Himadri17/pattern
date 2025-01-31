#include<stdio.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void main(){
    int N,i,j,res;
    printf("enter the value of rows:");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N-i;j++)
            printf(" ");
        
        for(j=0;j<=i;j++){
            res=factorial(i)/(factorial(j) * factorial(i-j) );
            printf("%d ", res );
        }
    }
}