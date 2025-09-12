#include<iostream>
#include<cmath>
using namespace std;

int main(){
 int Money;
 int Deposit;
 int Withdraw;
 Money=0;
 int choice;
 for(int i=0;i>=0;i++){
     cout<<"\n1.check balance\n2.deposit\n3.Withdraw\n4.exit";
    cin>>choice;
 if(choice==1){
    cout<<"current Balance ="<<Money;
 }
 else if (choice==2) {
    cout<<"enter amount to deposit :";
    cin>>Deposit;
    Money= Money+Deposit;
    cout<<"new balance :"<< Money;
 }
 else if (choice==3) {
 cout<<"enter amount to withdraw :";
 cin>>Withdraw;
 if (Withdraw>Money) {
    cout<<"insufficient Balance";
 
 }
 else {
    Money=Money-Withdraw;
 }}
 else if(choice==4){
    break;
 }
 continue;
 break;
}
}
 
