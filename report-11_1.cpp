#include <iostream>
using namespace std;

int add_tax(int* p){
    int tax=0.10**p;
    *p+=tax;
    return tax;
}

int main(){
    int x;
    cin>>x;
    int tax;
    tax=add_tax(&x);
    cout<<tax<<endl;
    cout<<x<<endl;
}