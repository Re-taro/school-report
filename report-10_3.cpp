#include <iostream>
using namespace std;

template <class T>
T maxt(T p[],int size){
    T ans=p[0];
    for (int i=1;i<size;i++){
        if(p[i]>ans){
            ans=p[i];
        }
    }
    return ans;
}

int main(){
    double x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<maxt(x,5)<<endl;
}