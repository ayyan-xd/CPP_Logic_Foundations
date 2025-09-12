#include<iostream>
#include<cmath>
using namespace std;

int main(){
 float G;
 float s1,s2,s3,s4,s5;
 cout<<"Enter Marks :";
 cin>>s1;
 cout<<"Enter Marks :";
 cin>>s2;
 cout<<"Enter Marks :";
 cin>>s3;
 cout<<"Enter Marks :";
 cin>>s4;
 cout<<"Enter Marks :";
 cin>>s5;
float avg =(s1+s2+s3+s4+s5)/5;
if (avg>=90 && avg<=100) {
    cout<<"Grade = A";

}
else if (avg>=80 && avg<90) {
cout<<"Grade = B";
}
else if (avg>=70 && avg<80) {
cout<<"Grade = C";
}
else if (avg<70) {
    cout<<"Grade = F";

}


}