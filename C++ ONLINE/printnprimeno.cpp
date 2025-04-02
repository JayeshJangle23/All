#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    for(int i=2;i<n*n;i++){
        int ist=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                ist++;
                break;
            }
        }
        if(ist==0){
            cout<<i<<endl;
            count++;
        }
        if(count==n){
            break;
        }
    }

}