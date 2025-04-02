#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        int rollno;
        float cgpa;
};
int main(){
    Student s1;
    s1.name="JAYESH";
    s1.rollno=18;
    s1.cgpa=7.5;
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.cgpa<<endl;
}