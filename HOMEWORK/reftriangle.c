#include<stdio.h>
void main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){     // for spaces new loop generate
        printf(" ");
        }
            for(int k=1;k<=i;k++){          
            printf("*");
            }
    printf("\n");
    }
}