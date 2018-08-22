#include<iostream>
#include<cmath>

using namespace std;

int main(){
//Define variables
int a,b,c,d,e;
//Ask data from user
cout<<"Enter no. of days"<<endl;
cin>>a;
//convert to years, weeks and days
b=a/365;
c=(a%365)/7;
d=floor(b);
e=d/7;
//Show the result
cout<<a<<" days= "<<floor(b)<<" years, "<<floor(c)<<" weeks and "<<floor(e)<<" days."<<endl;


return 0;

}
