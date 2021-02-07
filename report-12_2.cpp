#include <iostream>
using namespace std;

int main(){
    int test [5]={10,20,30,40,50};
    int *p1=test+1;
    int *p2;
    p2=p1++;
    cout<<*test<<endl;
    cout<<*p1<<endl;
    if(&test[1]==p2){
        p2+=2;
    }
    cout<<*p2<<endl;
    cout<<p1-p2;
}