#include<iostream>
using namespace std;
class Vector{
    public:
        int size;
        int capacity;
        int *arr;
    Vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }
    void add(int a){
        if(size==capacity){
            capacity=capacity*2;
            int *arr2=new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size]=a;
        size++;
    }
    void delet(){
        if(size==0){
            cout<<"NO ELEMENT WILL BE FOUND IN VECTOR"<<endl;
        }
        else{
            size--;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<endl;
        }
    }
    int get(int index){
        if(index==0){
            cout<<"VECTOR IS EMPTY \n";
            return -1;
        }
        if(index<0 || index>size){
            cout<<"INVALID INDEX \n";
            return -1;
        }
        return arr[index];
    }
};
int main(){
    Vector v;
    int a;
    cin>>a;
    v.add(a);
    v.add(10);
    v.add(20);
    v.add(30);
    v.delet();
    v.add(40);
    v.add(50);
    v.delet();
    v.display();
    cout<<v.get(2);
}