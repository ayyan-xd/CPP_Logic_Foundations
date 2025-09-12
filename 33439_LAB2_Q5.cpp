#include <algorithm>
#include <cstdlib>
#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;

int main(){
srand(time(0));
double n1=(double) rand()/RAND_MAX;
double n2=(double) rand()/RAND_MAX;
double n3=(double) rand()/RAND_MAX;
double n4=(double) rand()/RAND_MAX;
double n5=(double) rand()/RAND_MAX;
double avg ,minimum , maximum;
avg=(n1+n2+n3+n4+n5)/5;
minimum=min(n1,min(n2,min(n3,min(n4,n5))));
maximum=max(n1,max(n2,max(n3,max(n4,n5))));
cout<<"Avg is : "<<avg;
cout<<endl<<"Min is :"<< minimum;
cout<<endl<<"max is :"<<maximum;
}
