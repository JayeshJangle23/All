#include<iostream>
using namespace std;
class Student{
    private:
        float marks;
    public:
        string name;
        int roll_no;
        Student(string n,int r,float m){
            name=n;
            roll_no=r;
            marks=m;
        }
        void print(){
            cout<<"NAME :- "<<name<<endl;
            cout<<"ROLL NUMBER :- "<<roll_no<<endl;
            cout<<"MARKS :- "<<marks<<endl;
        }
        float getmarks(){
            return marks;
        }
        void setmarks(float m){
            marks = m;
        }
};
int main(){
    Student s1("JAYESH",1018,7.5);
    s1.print();
    cout<<s1.getmarks()<<endl;
    s1.setmarks(7.2);
    cout<<s1.getmarks()<<endl;
}