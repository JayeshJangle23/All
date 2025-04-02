// Check if an Array is Sorted
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    bool flag=1;
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                flag = 0;
                break;
            }
        }
    }
    flag==1?cout<<"TRUE":cout<<"FALSE";
}