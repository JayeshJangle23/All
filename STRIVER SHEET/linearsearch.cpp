// LINEAR SEARCH
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout<<target<<" IS PRESENT AT "<<i;
            return 0;
        }
    }
    cout<<target<<" IS NOT PRESENT ";
}