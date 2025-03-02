#include<iostream>
using namespace std;
class employee{
    public:
     int id;
    float salary;
    employee(int inid){
        id= inid;
        salary=10;
    }
    employee(){}
    };
class programmer : public employee {
    public:
    programmer(int inpid){
        id = inpid;
    }
    int lanaguagecode=9;
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
employee harry(1), rohan(2);
cout<<harry.salary;
cout<<rohan.salary;
programmer skillf(1);
cout<<skillf.lanaguagecode<<endl;
skillf.getdata();
    return 0;
}