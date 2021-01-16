#include <iostream>
using namespace std;

int max(int p,int q,int r){
    int max=r;
    if(p>q){
        if(p>r)
            max=p;
    }else{
        if(q>r)
            max=q;
    }
    return max;
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<max(x,y,z)<<endl;
}