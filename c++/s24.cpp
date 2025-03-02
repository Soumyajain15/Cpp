#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y){
        a = x;
        b  = y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void displaypoint(){
        cout<<"the no  is"<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
complex c1(1,1);
c1.displaypoint();
complex c2(4);
c2.displaypoint();
return 0;
}