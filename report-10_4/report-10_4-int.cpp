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
    int t[]={1,2,3,4,5,6,7,8,9,10,11};
    int count=11;
    reverse(t,count);
    for(int j=0;j<count;j++){
        cout<<t[j];
    }
    cout<<endl;
}