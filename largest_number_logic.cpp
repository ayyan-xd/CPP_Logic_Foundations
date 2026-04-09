#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c){
        cout<<"Largest = "<<a;
    }
    else if (b>c && b>a) {
    cout<<"Largest = "<<b;
    }
    else{
        cout<<"Largest = "<<c;
    }
}
