#include<iostream>
using namespace std;

int main(){
int m;
m=29;
int *ab=&m;
cout<<"value of m :"<<m<<endl;
cout<<"address of m:"<<&m<<endl;

m=34;

cout<<"2nd value of m:"<<m<<endl;
cout<<"2nd address of m:"<<&m<<endl;

m=7;

cout<<"3rd value of m:"<<m<<endl;
cout<<"3rd address of m:"<<&m<<endl;

return 0;
}
