// 4,7,10,13,16,................ UPTO N TERMS

#include<stdio.h>
void main()
{
    int n,a = 4;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
    printf("%d\n",a);
    a=a+3;
    }
}