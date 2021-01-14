#include <iostream>
using namespace std;

int main(){
    const int N=10;
    int num[N];

    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    int min=0;
    min=num[0];
    for(int x=0;x<N;x++){
        if(num[x]<min)
            min=num[x];
    }
    cout<<min<<endl;
}