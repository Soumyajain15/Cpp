#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
    int a,b;
public:
void getdatasimple(){
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;

}
void performoperationssimple(){
    cout<<"the value of a+b is :"<<a+b<<endl;
     cout<<"the value of a-b is :"<<a-b<<endl;
      cout<<"the value of a*b is :"<<a*b<<endl;
       cout<<"the value of a/b is :"<<a/b<<endl;
}
};
class scientificcalculator{
     int a,b;
public:
void getdatascientific(){
cout<<"enter the value of a "<<endl;
cin>>a;
cout<<"enter the value of b"<<endl;
cin>>b;

}
void performoperationsscientific(){
    cout<<"the value of cosa is :"<<cos(a)<<endl;
     cout<<"the value of asinais :"<<sin(a)<<endl;
      cout<<"the value of expa is :"<<exp(a)<<endl;
       cout<<"the value of tana is :"<<tan(a)<<endl;
}

};
class hybridcalculator:public simplecalculator, public scientificcalculator
{


};

int main(){
hybridcalculator c;
c.getdatascientific();
c.performoperationsscientific();
c.getdatasimple();
c.performoperationssimple();






}