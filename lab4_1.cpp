#include<iostream>

using namespace std;

int main(){

//define varible
double a,b,c;
//Ask data in cm from user
cout<<"Enter value in centimeter"<<endl;
//take data from user
cin>>a;
//convert to required units ie. m & km
b=a/100;
c=b/1000;
//show the result
cout<<a<<" cm = "<<b<<" m = "<<c<< "km"<<endl;


return 0;



}
