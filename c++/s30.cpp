#include<iostream>>
using namespace std;
class base{
    protected:
    int a,
      private:
      int b;
};
class derived:protected base{

};
int main(){
base b;
derived d;
cout<<d.a;// will not work as a is protected in both base as well as derived class






    return 0;
}