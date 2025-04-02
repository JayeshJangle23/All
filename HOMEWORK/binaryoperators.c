#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENTER VALUE OF a :");
    scanf("%d",&a);
    printf("ENTER VALUE OF b :");
    scanf("%d",&b);

    c = a & b;  // AND OPERATOR
    printf("THE ANSWER OF %d & %d IS : %d\n",a,b,c);
    c = a | b;  // OR OPERATER
    printf("THE ANSWER OF %d | %d IS : %d\n",a,b,c);
    c = a ^ b;  // XOR OPERATOR
    printf("THE ANSWER OF %d ^ %d IS : %d\n",a,b,c);
    c = ~a;     // NAGATION OPERATOR
    printf("THE ANSWER OF ~ %d IS : %d\n",a,c);
    c = ~b;     // NAGATION OPERATOR
    printf("THE ANSWER OF ~ %d IS : %d\n",b,c);
    c = a << b; // LEFT SHIFT OPERATOR
    printf("THE ANSWER OF %d << %d IS : %d\n",a,b,c);
    c = a >> b; // RIGHT SHIFT OPERATOR
    printf("THE ANSWER OF %d >> %d IS : %d\n",a,b,c);
    return 0;
}