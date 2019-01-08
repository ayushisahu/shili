//maximum of two number
#include<iostream>
using namespace std;

int main(){
int a,b;
int *p=&a;
int *q=&b;

cout<<"enter first no. :";
cin>>a;
cout<<"enter second no. :";
cin>>b;

if (*p>*q)
 cout<<"maximum"<<*p<<endl;
else cout<<"maximum"<<*q<<endl;

return 0;

}
