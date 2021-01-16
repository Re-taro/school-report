#include <iostream>
#include <math.h>
using namespace std;

double sub(double x,double y);
double squared_sum(double x,double y);

int main(){
    double x[2];
    double y[2];
    for(int i=0;i<2;i++){
        cin>>x[i]>>y[i];
    }
    cout<<sqrt(squared_sum(sub(x[1],x[0]),sub(y[1],y[0])));
}

double sub(double x,double y){
    return x-y;
}

double squared_sum(double x,double y){
    return x*x+y*y;
}