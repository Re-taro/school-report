#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double theta;
    double sin_theta;

    for(int i=0;i<=100;i++){
        theta=-M_PI+((2*M_PI)/100)*i;
        sin_theta=sin(theta);
        cout<<theta<<','<<sin_theta<<endl;
    }
}