// Move all Zeros to the end of the array
// an Array is shift by 1
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
    int index=n-1,j=0;
    int ans[n]={0};
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            ans[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
}