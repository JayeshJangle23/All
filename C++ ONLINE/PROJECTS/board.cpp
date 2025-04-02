#include<iostream>
#include<conio.h>
using namespace std;
int n=-1,b;
void board();
void checkToWin();
char a[10] = {'0','1','2','3','4','5','6','7','8','9'};
int main(){
board();
}
void board(){
    cout<<"       |      |      \n";
    cout<<"  "<<a[1]<<"    |   "<<a[2]<<"  |   "<<a[3]<<"   \n";
    cout<<"_______|______|______\n";
    cout<<"       |      |      \n";
    cout<<"       |      |      \n";
    cout<<"_______|______|______\n";
    cout<<"       |      |      \n";
    cout<<"       |      |      \n";
    cout<<"       |      |      \n";
}