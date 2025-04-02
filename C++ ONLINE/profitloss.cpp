#include<iostream>
using namespace std;
int main(){
    int sp,cp,behaviour;
    cout<<"ENTER SELLING PRICE :";
    cin>>sp;
    
    cout<<"ENTER COST PRICE :";
    cin>>cp;

    behaviour = sp - cp;
    
    if(behaviour<0){
        cout<<"LOSS\n";
        cout<<behaviour;
    }
    if(behaviour>0){
        cout<<"PROFIT\n";
        cout<<behaviour;
    }
    if(behaviour==0){
        cout<<"NO PROFIT NO LOSS\n";
        }
    }