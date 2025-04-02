#include<stdio.h>
int main(){
    int n,a=0;
    printf("ENTER A NUMBERb :");
    scanf("%d",&n);

    for( int i=2;i<=n-1;i++){
    if(n%i==0){
    a=1;
    break;
    }
    }
    if(a==0){
    printf("%d is a prime no.",n);
    }
    else{
    printf("%d is not a prime number.",n);
    }
}