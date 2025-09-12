#include<iostream>
using namespace std;

int main(){
float Marks;
cout<<"Enter Your Marks :";
cin>>Marks;
if(Marks>100){
    cout<<"Marks should be between 1 and 100";
}
else if (Marks<0) {

    cout<<"Marks shoulad be between 1 and 100";
}
if (Marks>=90 && Marks<=100) {
    cout<<"Grade = A";

}
else if (Marks>=80 && Marks<90) {
cout<<"Grade = B";
}
else if (Marks>=70 && Marks<80) {
cout<<"Grade = C";
}
else if (Marks>=60 && Marks<70) {
cout<<"Grade = D";
}
else if (Marks<60) {
    cout<<"Grade = F";

}



}