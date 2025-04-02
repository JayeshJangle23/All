#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        int price;
        int maxspeed;
        float avgconsumption;
};
void print(Car c){
    cout<<c.name<<" "<<endl<<c.price<<" "<<endl<<c.maxspeed<<" "<<endl<<c.avgconsumption<<endl;
}
void value(Car c){
    c.name="NANO";
}
void reference(Car& c){
    c.name="LAMBORGINI";
}
int main(){
    Car c1;
    cout<<"ENTER NAME OF CAR:-";
    cin>>c1.name;
    cout<<"ENTER PRICE OF CAR:-";
    cin>>c1.price;
    cout<<"ENTER MAXIMUN SPEED OF CAR:-";
    cin>>c1.maxspeed;
    cout<<"ENTER AVERAGE CONSUPTION OF PATROL OR DISEL:-";
    cin>>c1.avgconsumption;
    print(c1);
    value(c1);
    print(c1);
    reference(c1);
    print(c1);
}