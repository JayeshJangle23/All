// no. is divisible by 3 or 5 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    if(n%3==0 || n%5==0){    // || == or
        cout<<"NUMBER IS DIVISIBLE BY 3 OR 5";
    }
    else{
        cout<<"NUMBER IS NOT DIVISIBLE BY 3 OR 5";
    }

}