#include<stdio.h>
int main(){
    int n;
    printf("ENTER VALUE OF N :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                if(i==j)    printf(" ");
                else        printf("%d",j);
                }
                printf("\n");
    }              
}