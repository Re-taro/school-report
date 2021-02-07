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
    char x,y,z;
    x='c';
    y='a';
    z='t';
    swap(&x,&y,&z);
    cout<<x<<' '<<y<<' '<<z<<endl;
}