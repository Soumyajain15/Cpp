#include<iostream>
using namespace std;
class base1{
    public:
    void say(){
        cout<<"kaise ho"<<endl;
    }
};
class base2{
    public:
    void say(){
        cout<<"how are you"<<endl;
    }
};
class derived : public base1,  public base2{
    int a;
    public:
    void say(){
        base1::say();
    }
};


int main(){

base1 base1obj;
base2 base2obj;
base2obj.say();
base1obj.say();
derived d;
d.say();



    return 0;
}