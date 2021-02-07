#include <iostream>
using namespace std;

void func1(int& x){x=x*2;}
void func2(int* x){*x*=3;}

int main(){
    int y;
    cin>>y;
    cout<<y<<endl;
    func1(y);
    cout<<y<<endl;
    func2(&y);
    cout<<y<<endl;
}