// Sort an array of 0s, 1s and 2s
// LEETCODE - 76
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,k=0,j=n-1;
    while(k<=j){
        if(arr[k]==0){
            swap(arr[i],arr[k]);
            i++,k++;
        }
        else if(arr[k]==1){
            k++;
        }
        else{
            swap(arr[k],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}