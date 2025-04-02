// AP : 100,97,94....... UP TO N TERMS

#include<stdio.h>
int main(){
    int n , a=100;

    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
    printf("%d\n",a);
    a=a-3;
    }
}