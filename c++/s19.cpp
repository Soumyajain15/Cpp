#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
   int add(int a, int b){
        return (a+b);
   }
   int sum(complex , complex );
};
class complex{
    int a,b ;
    friend int calculator:: sum(complex, complex );
    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }
void printnumber(){
    cout<<"your number"<<a<<"+"<<b<<"i"<<endl;
}
};
int calculator :: sum(complex o1, complex o2){
    return (o1.a+o2.a);
}

int main(){
complex o1,o2;
o1.setnumber(1,4);
o2.setnumber(4,6);
calculator calc;
int result= calc.sum(o1,o2);
cout<<"the sum of real part of o1 and o2 are"<<result<<endl;
return 0;

}