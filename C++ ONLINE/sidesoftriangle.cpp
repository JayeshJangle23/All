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

    if((a+b)>c  &&  (b+c)>a  &&  (a+c)>b){
        cout<<"THESE IS A TRIANGLE";
    }
    else{
        cout<<"THESE IS NOT A TRIANGLE";
    }

}