//multiple inheritence program
#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int=a;
    }
    
};
class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int= a;
    }
};
class derived : public base1 , public base2{
    public:
    void show(){
        cout<<"the value of base 1"<<base1int<<endl;
         cout<<"the value of base 2"<<base2int<<endl;
         cout<<"the sum of these values is"<<base1int+base2int<<endl;
    }
};
int main(){
derived harry;
harry.set_base1int(25);
harry.set_base2int(5);
harry.show();
    return 0;
}