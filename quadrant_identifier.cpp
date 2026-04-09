#include<iostream>
using namespace std;

int main(){
int x,y;
cin>>x;
cin>>y;

if(x>0){
    if(y>0){
        cout<<"Quadrant I";
    }
    else{
        cout<<"Quadrant IV";
    }
}
else{
    if(y>0){
        cout<<"Quadrant II";
    }
    else{
        cout<<"QuadrantIII";
    }
}



}
