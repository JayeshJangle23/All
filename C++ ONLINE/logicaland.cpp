// no. is divisible by 3 and 5 or not

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;

    if(n%3==0 && n%5==0){       // && == and
        cout<<"NUMBER IS DIVISIBLE BY 3 AND 5";
    }
    else{
        cout<<"NUMBER IS NOT DIVISIBLE BY 3 AND 5";
    }

}