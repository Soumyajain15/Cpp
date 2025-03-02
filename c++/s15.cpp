#include<iostream>
using namespace std;
class employee{
   
    int id;
   static int count;
     public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"the id of the employee is"<<id<<"and this is employee no "<<count<<endl;
    }
    static void getcount(void){
        cout<<"the value of count is"<<count<<endl;
    }
};
int employee :: count;
int main(){
employee harry,mohan,shyam;
harry.setdata();
harry.getdata();
employee::getcount();
shyam.setdata();
shyam.getdata();
employee::getcount();
mohan.setdata();
mohan.getdata();
employee::getcount();
return 0;

}