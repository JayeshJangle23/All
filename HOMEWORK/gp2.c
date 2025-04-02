// GP : 100,50,20...... UP TO N TERMS

#include<stdio.h>
void main(){
    int n , a=100 ;

    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    for( int i=1 ; i<=n ; i++){
        printf("%d\n",a);
        a=a*1/2; }
    
    }