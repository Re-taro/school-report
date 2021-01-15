#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double sin_theta;
    do{
        cin>>sin_theta;
    }while(sin_theta<0.0||sin_theta>1.0);

    double cos_theta;
    cos_theta=sqrt(1-sin_theta*sin_theta);
    cout<<cos_theta<<endl;
} 
