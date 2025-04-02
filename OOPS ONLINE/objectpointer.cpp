#include<iostream>
using namespace std;
class Cricketer{
    public:
        string name;
        int runs;
        float avg;
    Cricketer(string s,int r,float a){
        name=s;
        runs=r;
        avg=a;
    }
};
int main(){
    Cricketer c1("ROHIT_SHARMA",256,400.25);
    Cricketer *c2=new Cricketer("JAYESH_JANGLE",100,200);
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
    int *x=new int(96854);
    cout<<*x;
}