#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,z;
    cout<<"Enter Value :";
    cin>>x;
    cout<<"Enter Value :";
    cin>>y;
    cout<<"Enter Value :";
    cin>>z;
    float D;
    D=sqrt(x*x +y*y +z*z);
    cout<<"Distance from origin is "<<D;
}