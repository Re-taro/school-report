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
    int x,y,z;
    x=1;
    y=2;
    z=3;
    swap(&x,&y,&z);
    cout<<x<<' '<<y<<' '<<z<<endl;
}