#include<stdio.h>
void main(){
    int a,b,ans=1;
    printf("ENTER A VALUE OF a AND b :");
    scanf("%d%d",&a,&b);

    for(int i=1;i<=b;i++){
        ans = a*ans;
    }
    printf("%d",ans);
}