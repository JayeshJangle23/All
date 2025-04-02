// SOLVE : 1-2+3-4+5-6............... UP TO N TERMS

#include<stdio.h>
void main(){
    int n;
    printf("ENTER VLUE OF N:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }

        else{ 
            sum=sum-i;
        }
    }

    printf("THE SUM OF THE SERIES IS %d",sum);
}