#include<stdio.h>
int main(){
    int n;
    printf("ENTER NO. OF ROWS :");
    scanf("%d",&n);
    int nsp= n - 1 ;
    int nst = 1 ;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp = nsp - 1 ;
        int alp = 65;
            for(int k=1;k<=nst;k++){
                printf("%c",alp);
                alp++;
            }
    nst = nst + 2;
    printf("\n");
    }
}