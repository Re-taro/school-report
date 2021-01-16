#include <iostream>
using namespace std;

void printArrayReverse(double a[],int N){
    for(int i=N-1;i>=0;i--){
        cout<<a[i]<<",\n"[i==0];
    }
}

double max(double p[],double size){
    double ans=p[0];
    for(int i=1;i<size;i++){
        if(p[i]>ans)
            ans=p[i];
    }
    return ans;
}

int main(){
    double x[5];
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    printArrayReverse(x,5);
    int m=max(x,5);
    cout<<m<<endl;
}