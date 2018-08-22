#include<iostream>

using namespace std;

int main(){

//define variables
double a,b,c;

//ask for first angle
cout<<"Enter first angle of a triangle in °"<<endl;
//take data from user
cin>>a;
//ask for second angle
cout<<"Enter second angle of a triangle in °"<<endl;
//take data from user
cin>>b;
//do the math
c=180-(a+b);
//display result
cout<<"Third angle of a triangle is "<<c<<"°"<<endl;

return 0;

}
