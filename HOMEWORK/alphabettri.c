#include<stdio.h>
int main(){
    int n;
    printf("ENTER NO. OF ROWS :");
    scanf("%d",&n);
  
    for(int i=1;i<=n;i++){
    int a=65;
        for(int j=1;j<=i;j++){
            printf("%c",a);
            a=a+1;
            }
    printf("\n");
    }
}