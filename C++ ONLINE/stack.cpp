#include<iostream>
using namespace std;
int stack[5],n=5;
int top=-1;
void push (int x){
    if(top==n-1){
        cout<<" THE STACK IS FULL "<<endl;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop (){
    if(top == -1){
        cout<<" THE STACK IS EMPTY "<<endl;
    }
    else{
        cout<<" THE POPPED ELEMENT IS "<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if(n>=0){
        cout<<"STACK ELEMENTS ARE : "<<endl;
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<" STACK IS EMPTY "<<endl;
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    display();
}