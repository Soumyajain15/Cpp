#include<iostream>
using namespace std;
int main(){
int a=3;
int *b = &a;
cout << b;
cout<< "the address of a is"<<&a<<endl;
cout<< "the address of b is"<<b<<endl;
cout<< "the value of address of b is"<<*b<<endl;
int **c = &b;
cout<< "the address of b is"<<&b<<endl;
cout<< "the address of c is"<<c<<endl;
cout<< "the value of  address of c is"<<**c<<endl;

return 0;
}
