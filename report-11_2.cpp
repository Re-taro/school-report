#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
    int c=7;
    int* pA=&a;
    int* pB=&b;
    int* pC=&c;
    *pA=3;
    pC=pB;
    *pC*=2;
    cout<<a<<' '<<b<<' '<<c<<endl;
}