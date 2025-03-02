#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interstrate;
    float returnvalue;
    public:
    bankdeposit(){}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
bankdeposit::bankdeposit(int p,int y,float r){
    principal=p;
   years=y;
   interstrate=r;
   returnvalue=principal;
   for(int i=0;i<y;i++){
    returnvalue = returnvalue*(1+interstrate);
   }
}

bankdeposit::bankdeposit(int p,int y,int r){
    principal=p;
   years=y;
   interstrate=float(r)/100;
   returnvalue=principal;
   for(int i=0;i<y;i++){
    returnvalue = returnvalue*(1+interstrate);
   }
}

void bankdeposit::show(){
    cout<<endl<<"principal amount "<<principal<<endl<<"return value"<<years<<"year is"<<returnvalue<<endl;
}
int main(){
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of p,y,and r"<<endl;
    cin>>p>>y>>r;
bd1=bankdeposit(p,y,r);
bd1.show();
cout<<"enter the value of p,y,and R"<<endl;
    cin>>p>>y>>R;

bd2=bankdeposit(p,y,R);
bd2.show();

return 0;

}