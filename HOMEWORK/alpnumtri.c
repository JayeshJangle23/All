#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        int a=65;
            if(i%2!=0){
            printf("%d",j);
            }
            else{
            printf("%c",a);
            }
        }
    printf("\n");
    }
}