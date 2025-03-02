#include<iostream>
using namespace std;
int product(int a ,int b){
   return a*b;
}
int main(){
    int a,b;
    cout<<"value of a and b";
    cin>>a>>b;
    cout<<"product of a and b"<<product(a,b);
    return 0;
}