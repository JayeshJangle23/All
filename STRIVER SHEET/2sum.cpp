// Two Sum : Check if a pair with given sum exists in Array
// LEETCODE - 1
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,target;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTER TARGET :- ";
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j];
                return 0;
            }
        }
    }
    cout<<"-1  -1";
    return 0;
}