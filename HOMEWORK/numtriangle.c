#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    int a=n%2==0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
    printf("\n");
    }
}