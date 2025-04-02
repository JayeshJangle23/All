// UNION OF TWO ARRAY
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY :- ";
    cin>>n;
    int a[n],b[n];
    cout<<"ENTR ELEMENTS OF FIRST ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ENTR ELEMENTS OF SECOND ARRAY :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<n){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++,j++;
        }
        else{
            if(i<n){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
    }
    cout<<"THE UNION OF TWO ARRAYS IS :-"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}