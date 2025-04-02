#include<iostream>
using namespace std;
class Function{
public:
    int num,den;
    Function(int a,int b){
        this->num=a;
        this->den=b;
    }
    void display(){
        cout<<num<<" / "<<den<<endl;
    }
    Function operator+(Function f){
        num= this->num * f.den + f.num * this->den;
        den= f.den * this->den;
        Function ans(num,den);
        return ans;
    }
    Function sub(Function f){
        num= this->num * f.den - f.num * this->den;
        den= f.den * this->den;
        Function ans(num,den);
        return ans;
    }
    int gcd(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    Function simplify(Function f){
        int n=gcd(num,den);
        Function sim((this->num/n) ,(this->den/n) );
        return sim;
    }
};
int main(){
    Function f1(1,2);
    Function f2(1,4);
    Function f3 =f1+f2;
    Function f4=f1.sub(f2);
    f3=f1.simplify(f2);
    f4=f1.simplify(f2);
    f3.display();
    f4.display();
}