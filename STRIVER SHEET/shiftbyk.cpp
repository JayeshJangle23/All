// an Array is shift by 1
#include<iostream>
#include<limits.h>
using namespace std;
void reverse(int a[],int start,int end){
    while(start<=end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++,end--;
    }
}
int main(){
    int n,k;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"ENTER SHIFT SIZE :- ";
    cin>>k;
    if(k>n) k=k%n;
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}