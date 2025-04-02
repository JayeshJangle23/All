// Find the missing number in an array
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    vector<int>arr;
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    int sumall=(n*(n+1))/2;
    cout<<"THE MISSING NUMBER WILL BE :- "<<sumall-sum;
}