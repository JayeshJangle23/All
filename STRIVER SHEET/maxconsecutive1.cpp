// Count Maximum Consecutive One's in the array
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
    int count=0,i=0,j=1,last=count,max=-1;
    while(i<n){
        if(arr[i]==arr[j]==1){
            count++;
            j++;
        }
        else{
            if(max<count){
                max=count;
                count=0;
            }
            i=j;
            j++;
        }
    }
    cout<<max;
}