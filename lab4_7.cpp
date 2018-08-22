#include<iostream>
#include<cmath>

using namespace std;

int main(){

//Define variables
float a,b,c,d;
//Ask lenght of side
cout<<"Enter length of side of a equilateral triangle"<<endl;
//Take input from user
cin>>a;
//calculate area
b=a*a/4;
c=b*sqrt(3);
//Display result
cout<<"Area of the equilateral triangle is "<<c<<endl;

return 0;


}
