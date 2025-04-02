#include<stdio.h>
int main(){
    int a=3,b=4,c;
    c = a - b ;
    switch(c){
        case 1||2:
        printf("\nCLUB");
        break;
        case 2:
        printf("\nHEART");
        break;
        //case 2-1:
        //printf("\nSUN");
        //break;
    }
}