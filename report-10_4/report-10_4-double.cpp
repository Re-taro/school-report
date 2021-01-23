#include <iostream>
using namespace std;

template <class T>
T reverse(T x[],int a){
    for(int i=0;i<a/2;i++){
        T b=x[i];
        x[i]=x[a-i-1];
        x[a-i-1]=b;
    }
    return 0;
}

int main(){
    double t[]={1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.1,2.2};
    int count=11;
    reverse(t,count);
    for(int j=0;j<count;j++){
        cout<<t[j];
    }
    cout<<endl;
}