#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rno;
        float gpa;
        Student(){

        }
        Student(string n,int r,float g){
            name=n;
            rno=r;
            gpa=g;
        }
};
int main(){
    Student s1("JAYESH_JANGLE",18,7.6);
    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    Student s2;
    s2.name="JAYESH";
    s2.rno=1018;
    s2.gpa=7.5;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}