#include<stdio.h>
int factorial(int x){
    int fact;
    for(i=1;i<=x;i++){
    fact = fact*i;
    }
    return fact;
}
int permutation(int i,int r){
    int per = factorial(n) / factorial(n-r);
}
    return per;
int main(){
    int n;
    printf("ENTER VALUE OF N :");
    scanf("%d",&n);
    int r;
    printf("ENTER VALUE OF R :");
    scanf("%d",&r);

    int permu = permutation(n,r);
    printf("%d",permu);
    return 0;
}