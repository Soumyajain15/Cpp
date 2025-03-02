#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
   void setnumber(int n1,int n2){
    a=n1;
    b=n2;

   }
   friend complex sum(complex o1, complex o2);
   void printnumber(){
cout<<"your number"<<a<<"+"<<b<<"i";

   }
};
complex sum(complex o1,complex o2){
complex o3;
o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
return o3;
}
int main(){
complex c1, c2,add;
c1.setnumber(1,3);

c2.setnumber(2,6);
c1.printnumber();
c2.printnumber();
add=sum(c1,c2);
add.printnumber();

    return 0;
}