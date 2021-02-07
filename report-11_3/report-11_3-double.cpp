#include <iostream>
using namespace std;

template <class T>
void swap(T* a,T* b,T* c){
    T tmp=*a;
    *a=*b;
    *b=*c;
    *c=tmp;
}

int main(){
    double x,y,z;
    x=1.5;
    y=2.5;
    z=3.5;
    swap(&x,&y,&z);
    cout<<x<<' '<<y<<' '<<z<<endl;
}