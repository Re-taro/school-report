#include <iostream>
using namespace std;

int rect_area(int width,int height){
    if(!height){
        return width*width;
    }
    return width*height;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int area1,area2;
    area1=rect_area(a,b);
    area2=rect_area(c);
    cout<<area1<<endl;
    cout<<area2<<endl;
}