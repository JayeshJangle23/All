#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i ;
    }
    printf("%d",fact);
}