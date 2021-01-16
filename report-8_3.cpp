#include <iostream>
#include <math.h>
using namespace std;

int factorial(int x){
    int ans=1;
    for(int i=1;i<=x;i++){
        ans*=i;
    }
    return ans;
}

int main(){
    const int maxn=10;
    for(int i=0;i<maxn;i++){
        cout<<i<<"!="<<factorial(i)<<endl;
    }
}