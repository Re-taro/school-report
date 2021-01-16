#include <iostream>
using namespace std;

void func1(int x){
    x=x*2;
}

inline void func2(int x){
    x=x*2;
}

int main(){
    int y=3;
    func1(y);
    cout<<y<<endl;
    func2(y);
    cout<<y<<endl;
}