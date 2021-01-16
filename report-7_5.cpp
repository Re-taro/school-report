#include <iostream>
#include <math.h>
using namespace std;

double ThetaToRadian(double theta);

int main(){
    double theta=0;
    double radian=0;
    double sin_theta=0;
    double cos_theta=0;
    double tan_theta=0;
    do{
        cin>>theta;
    }while(theta<0.0||theta>360);
    if(theta==0){
        cos_theta=1;
    }else if(theta==90){
        sin_theta=1;
    }else if(theta==180){
        cos_theta=-1;
    }else if(theta==270){
        sin_theta-1;
    }else if(theta==360){
        cos_theta=1;
    }else{
        sin_theta=sin(ThetaToRadian(theta));
        cos_theta=cos(ThetaToRadian(theta));
        tan_theta=tan(ThetaToRadian(theta));
    }
    cout<<sin_theta<<' '<<cos_theta<<' '<<tan_theta<<endl;
}

double ThetaToRadian(double theta){
    return theta*M_PI/180.0;
}
