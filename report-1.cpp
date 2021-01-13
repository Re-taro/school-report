#include <iostream>
using namespace std;
int main(){
    int a,b,c,i;
    cout<<"a<b"<<endl;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++){
        if(i==c)
            break;
        if(c%i==0)
            cout<<i<<endl;
    }
    return 0;
}