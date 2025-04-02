#include<stdio.h>
int main(){
    int n;
    printf("ENTER VALUE OF n :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int alp=64;
        for(int j=1;j<=n-i+1;j++){
            printf("%c",alp+1);
            alp++;
        }
        for(int k=1;k<=i-1;k++){
                printf(" ");
            }
            for(int k=1;k<=i-1;k++){
                printf(" ");
            }
            
            for(int j=1;j<=n-i+1;j++){
            
            printf("%c",alp+1);
            alp--;
        }
            
    printf("\n");
    }
}