// WRITE A PROGRAME WHICH GET A VALUE AND SUM OF THERSE VALUE SAPARATELY.

#include<stdio.h>
int main(){
    int n,ld,sum=0;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);

    while(n!=0){
        ld = n % 10;
        sum = sum + ld;
        n=n/10;
    }
    printf("THE SUM OF THE WHOLE DIGIT IS %d.",sum);
    }