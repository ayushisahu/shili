//example showing the use of & and *

#include<iostream>
using namespace std;

int main(){
//declare data types and their values
int m=300;
float fx=300.600006;
char z;



//print results using respective operators
cout<<"address of m :"<<&m<<endl;
cout<<"address of fx :"<<&fx<<endl;
cout<<"address of cht :"<<&z<<endl;

cout<<"value ofaddress of m :"<<*(&m)<<endl;
cout<<"value of address of fx :"<<*(&fx)<<endl;
cout<<"value of address of cht :"<<*(&z)<<endl;

//printing of address using pointer variable
int *p=&m;
float *q=&fx;
char *r=&z;
cout<<*p<<endl;
cout<<*q<<endl;
cout<<*r<<endl;

//using only pointer operator
cout<<p<<endl;
cout<<q<<endl;
cout<<r<<endl;

return 0;
}
