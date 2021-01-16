#include <iostream>
using namespace std;

void func1(int x[],unsigned int n){
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    }
}

void func2(int x[],unsigned int n){
    for(int i=0;i<5;i++){
        x[i]=x[i]*2;
    }
}

int main(){
    int y[5]={2,4,6,8,10};
    func2(y,5);
    func1(y,5);
}