#include<iostream>
using namespace std;
void swapPointer(int *a , int *b){
int temp = *a;
 *a =*b;
 *b=temp;
}

int main(){
int x=5, y=2;
cout<<"value of a is"<<x<<"value of b is "<< y <<endl;
swapPointer(&x,&y);
cout<<"value of a is"<<x<<"value of b is "<<y<<endl;
return 0;


}