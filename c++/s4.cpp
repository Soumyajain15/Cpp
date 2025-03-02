#include<iostream>
using namespace std;
int main(){
    int  marks[4]={20,75,53,86};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[03]<<endl;
    for (int i=0;i<4;i++)
    {
        cout<<"the value of marks is "<<i<<"is"<<marks[i]<<endl;
            }int *p = marks;
            cout<<" the  value of marks is "<< *p<<endl;
            cout<<" the  value of marks is "<< *(p+1)<<endl;
            cout<<" the  value of marks is "<< (*p+2)<<endl;
            cout<<" the  value of marks is "<< (*p+3)<<endl;
            

    return 0;
}