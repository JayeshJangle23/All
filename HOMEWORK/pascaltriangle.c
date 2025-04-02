#include<stdio.h>
    int factorial(int x){
        int fact = 1;
        for(int i=1;i<=x;i++){
            fact = fact * i;  
        }
        return fact;
}
    int combi(int n,int r){
        int ncr = factorial(n) / (factorial(r)*factorial(n-r));
        return ncr;
    }
int main(){
    int n,nsp=n-1;
    printf("ENTER VALUE OF n :");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        for(int k=1;k<=n+1-i;k++){
            printf(" ");
        }
        
        for(int j=0;j<=i;j++){
            int icj = combi(i,j);
            printf(" %d ",icj);
        }
    printf("\n");
    }  

    return 0;  
}
