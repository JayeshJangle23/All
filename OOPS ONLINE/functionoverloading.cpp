#include<iostream>
using namespace std;
class A{
    public:
        void sum(int a,int b){
            cout<<a+b<<endl;
        }
        void sum(int a,int b,int c){ 
            cout<<a+b+c<<endl;
        }
        /*int sum(int a,int b){     THESE GIVE ERROR BECAUSE OF FUNCTION OVERLOADING
            cout<<a+b<<endl;
        }*/
};
int main(){
    A a;
    a.sum(10,5);    
    a.sum(1,2,3);    
    a.sum(0,0);
}