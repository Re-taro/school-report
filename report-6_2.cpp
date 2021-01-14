#include <iostream>
#include <math.h>
using namespace std;

int main(){
    const int N=20;
    int math[N];

    int sum=0;
    for(int i=0;i<N;i++){
        cin>>math[i];
        sum+=math[i];
    }

    double ave=static_cast<double>(sum)/N;

    double var=0;
    for(int i=0;i<N;i++){
        var+=(math[i]-ave)*(math[i]-ave);
    }
    var=sqrt(var/N);

    for(int i=0;i<N;i++){
        cout<<10*(math[i]-ave)/var+50<<endl;
    }
}