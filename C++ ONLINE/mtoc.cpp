#include<iostream>
using namespace std;
int main(){
    int n;
    float value,result;
    cout<<"M TO C PRESS 1 :\n";
    cout<<"C TO M PRESS 2 :\n";
    cin>>n;
    cout<<"VALUE";
    cin>>value;
    if(n==1){
    result = value * 100;
    cout<<"GIVEN ANSWER :"<<result;
    }
        if(n==2){
        result = value / 100;
        cout<<"GIVEN ANSWER :"<<result;
    }

}