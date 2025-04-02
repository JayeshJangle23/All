#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NO. OF ROWS:");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;
    for(int i=65;i<=2*n+1;i++){
        printf("%c",i);
    }
    printf("\n");
        for(int i=1;i<=n;i++){
            int a = 65 ;
            for(int j=1;j<=nst;j++){
            printf("%c",a);
            a++;
            }
                for(int k=1;k<=nsp;k++){
                    printf(" ");
                    a++;
                }
                    for(int j=1;j<=nst;j++){
                        printf("%c",a);
                        a++;
                    }
    nst--;
    nsp+=2;
    printf("\n");
    }
}