#include<stdio.h>
int main(){
    int n;
    printf("ENTER NO. OF ROWS :");
    scanf("%d",&n);
    int nsp = n - 1 ;
        for(int i=1;i<=n;i++){
        int a = i - 1 ;
        for(int q=1;q<=nsp;q++){            // LOOPS FOR SPACES
            printf(" ");
        }
        nsp = nsp - 1;
            for(int j=1;j<=i;j++){
            printf("%d",j);
            }
            for(int k=1;k<=i-1;k++){         // LOOPS FOR RETURN VALUE
                printf("%d",a);
                a = a - 1;
            }
    printf("\n");
    }
}