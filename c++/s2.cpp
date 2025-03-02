#include<iostream>
using namespace std;
//int c=45;
int main(){
    /*int a,b,c;
    cout<<" value of a is"<<endl;
    cin>>a;
     cout<<" value of b is"<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum is"<<c<<endl;
    cout<<" the global c is"<<::c;
    return 0;
*/
int a = 45;
float b = 51.55 ;
cout<<" value of a is "<< (float)a <<endl;
cout<<" value of a is "<< float(a) <<endl;
cout<<" value of b is "<< (int)b <<endl;
cout<<" value of b is "<< int(b) <<endl;
int c = int(b);
cout <<" expression is " << a+b << endl;
cout <<" expression is " <<a+int(b) << endl;
cout <<" expression is " << a+(int)b << endl;
cout <<" expression is " << float(a)+b << endl ;
return 0;
}