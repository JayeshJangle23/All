// Find Second Smallest and Second Largest Element in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,count=0;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    if(n==1){
        cout<<"SECOND MAXIMUM ELEMENT IN THESE ARRAY IS :- -1"<<endl;
        cout<<"SECOND MINIMUM ELEMENT IN THESE ARRAY IS :- -1"<<endl;
        return 0;
    }
    else{
        cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max=INT_MIN,min=INT_MAX;
        int smax=INT_MIN,smin=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
            if(arr[i]<max && smax!=max){
                smax=arr[i];
            }
            if(arr[i]<min){
                smin=min;
                min=arr[i];
            }
            if(arr[i]<smin && arr[i]!=min){
                smin=arr[i];
            }
        }
        cout<<"MAXIMUM ELEMENT IN THESE ARRAY IS :- "<<max<<endl;
        cout<<"SECOND MAXIMUM ELEMENT IN THESE ARRAY IS :- "<<smax<<endl;
        cout<<"MINIMUM ELEMENT IN THESE ARRAY IS :- "<<min<<endl;
        cout<<"SECOND MINIMUM ELEMENT IN THESE ARRAY IS :- "<<smin<<endl;
    }
    return 0;
}