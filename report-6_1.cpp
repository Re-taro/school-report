#include <iostream>
using namespace std;
int main(){
    int x[10];

    for(int i=0;i<10;i++){
        x[i]=(i+1)*(i+1);
    }
    for(int i=9;i>=0;i--){
       cout<<x[i]<<endl; 
    }
}