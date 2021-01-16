#include <iostream>
using namespace std;

void printArray(double a[],int N);

void sort(double b[],int N);

int main(){
    const int maxn=10;
    double v[maxn];
    for(int i=0;i<maxn;i++){
        cin>>v[i];
    }
    printArray(v,maxn);
    sort(v,maxn);
    printArray(v,maxn);
}

void printArray(double a[],int N){
    for(int i=0;i<N;i++){
        cout<<a[i]<<(i<N-1?",":"\n");
    }
}

void sort(double b[],int N){
    for(int c=0;c<=N-1;c++){
        for(int d=c+1;d<N;d++){
            if(b[c]<b[d]){
                double ans=b[d];
                b[d]=b[c];
                b[c]=ans;
            }
        }
    }
}
