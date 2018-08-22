#include<iostream>

using namespace std;

int main(){

//define variable
double a,b;
//ask data in °C from user
cout<<"Enter temperature in Celsius"<<endl;
//take data from user
cin>>a;
//convert data
b=(a*1.8)+32;
//display result
cout<<a<<" C° = "<<b<<" F°"<<endl;

return 0;

}
