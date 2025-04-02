#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
    Cricketer(string s,int r){
        name=s;
        runs=r;
    }
    void print(){
        cout<<name<<" "<<runs<<endl;
    }
};
int main(){
    Cricketer c1("ROHIT_SHARMA",264);
    c1.print();
}