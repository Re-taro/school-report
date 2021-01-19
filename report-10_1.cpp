#include <iostream>
using namespace std;

void func(int x=4,int y=5,int z=6){
    cout<<x<<' '<<y<<' '<<z<<endl;
}
int main(){
    func();
    func(10);
    func(10,20);
    func(10,20,30);
}