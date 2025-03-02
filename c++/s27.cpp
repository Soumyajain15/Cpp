#include<iostream>
using namespace std;
int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when the constructor is called for object"<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when my destructor  is called for object number"<<count<<endl;
        count--;
    }
};
int main(){

cout<<"inside main function"<<endl;
cout<<"creating first object"<<endl;
num n1;
{
    cout<<"creting two more objects"<<endl;
    num n2, num3;
}
cout<<"back to main"<<endl;
return 0;
}