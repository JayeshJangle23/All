#include<stdio.h>
int main(){
    int n;
    printf("ENTER NO. OF ROWS :");
    scanf("%d",&n);
    int nst=1;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
            printf(" ");
            }
            for(int k=1;k<=nst;k++){
                printf("%d",k);
            }
            nst = nst + 2;
    printf("\n");
    }
}