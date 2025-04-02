// 4,7,10,13,......... up to n terms

#include<stdio.h>
void main()
{   int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for ( int i=4 ; i<=3*n+1 ; i=i+3 ){
    printf("%d\t",i);
    }
}