#include <iostream>
using namespace std;

int main(){
    const int num=2;
    int x[num][num]={{1,2},{3,4}};

    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<x[i][j]<<endl;
        }
    }
}