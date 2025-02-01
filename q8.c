#include<stdio.h>
//que8: draw the pattern for n=5
int main(){
    int min=0,i,n ,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            int a=i;
            if(i>n) a=2*n-i;
            int b=j;
            if(j>n) b=2*n-j;
            if(a<b) min=a;
            else min=b;
            
            printf("%d", n+1-min);
        }
        printf("\n");
    }
}