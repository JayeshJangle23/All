#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER 1st SIDE :";
    cin>>a;
    cout<<"ENTER 2nd SIDE :";
    cin>>b;
    cout<<"ENTER 3rd SIDE :";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" IS GREATER";
        }
        else{
            cout<<c<<" IS GREATER";
        }
    }
    else{
        cout<<b<<" IS GREATER";
    }

}