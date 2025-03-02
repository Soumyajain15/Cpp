#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
complex(void);
void printdata()
{
    cout<<"your no."<<a<<"+"<<b<<"i"<<endl;
}

};
complex::complex(void){
    a=10;
    b=0;
}
int main(){
complex c;
c.printdata();
return 0;
}