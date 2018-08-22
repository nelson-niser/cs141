#include<iostream>

using namespace std;

int main(){

//define variables
double a,b,c;
//ask for temperature in °F
cout<<"Enter temperature in °F"<<endl;
//input from user
cin>>a;
//convert to °C
b=a-32;
c=b*5/9;
//Display result
cout<<a<<" °F = "<<c<<" °C"<<endl;

return 0;


}
