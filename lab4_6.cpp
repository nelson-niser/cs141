#include<iostream>

using namespace std;

int main(){

//define variables
double a,b,c;

//Ask for base
cout<<"Enter length of base of triangle"<<endl;
//Take data from user
cin>>a;
//Ask for height
cout<<"Enter length of height of the triangle"<<endl;
//Take data from user
cin>>b;

//Do the math
c=0.5*a*b;
//show the result
cout<<"Area of the triangle is "<<c<<endl;

return 0;

}
