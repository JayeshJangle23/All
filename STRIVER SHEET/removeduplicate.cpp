// CHECK DUPLICATE FROM SORTED ARRAY
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>ans;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int arr[n];
    int index=0;
    cout<<"ENTR ELEMENTS OF ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){
        if(arr[i]!=arr[i+1]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[i]);
            i+=2;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    
}