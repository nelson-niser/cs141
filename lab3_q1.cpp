#include<iostream>
using namespace std;
int main ()
{
//define the data types
int a(5);
float b(1121.2613);
double c(5653.235);
bool d(0);
char e[] = "n";

//size of data
cout <<a<<" is and integer type data"<<endl<<" the size of "<<a<<" is "<<sizeof(a)<<endl;
cout <<b<<" is and float type data"<<endl<<" the size of "<<b<<" is "<<sizeof(b)<<endl;
cout <<c<<" is and double type data"<<endl<<" the size of "<<c<<" is "<<sizeof(c)<<endl;
cout <<d<<" is and bool type data"<<endl<<" the size of "<<d<<" is "<<sizeof(d)<<endl;
cout <<e<<" is and char type data"<<endl<<" the size of "<<e<<" is "<<sizeof(e)<<endl;

return 0;
}
