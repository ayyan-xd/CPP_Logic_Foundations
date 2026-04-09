#include<iostream>
using namespace std;

int main(){
int a,b;
cin>> a;
cin>> b;

int sum=a+b;
int product=a*b;
if(sum%product==0){
    cout<<" divisible ";
}
else {
cout<<"not divisible";
}

}
