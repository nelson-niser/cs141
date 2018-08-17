#include<iostream>

using namespace std;
//comments comments
int main ()
{
	int a,b,result; //defining variables "a" "b" and "result" of int type

	a = 5; //declaring a = 5
	b = 2; //declaring b = 2
	cout <<"sum of 1 and "<<a<<" is";
	a = 1 + a; // a changes to sum of 1 and "previous value of a"
	cout <<a<<endl;
	result = a - b; //assignning value of the variable "result"
	cout <<"difference of "<<a<<" and "<<b<<" is "<<result <<endl; //print value of "result"
	result = a*b;
	cout <<"product of "<<a<<" and "<<b<<" is "<<result <<endl;
	result = a/b;
	cout <<"division of "<<a<<" by "<<b<<" is "<<result <<endl;
	result = a%b;
	cout <<"remiander when "<<a<<" divides by "<<b<<" is "<<result <<endl;

return 0;	
}
