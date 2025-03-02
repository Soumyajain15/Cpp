#include<iostream>
using namespace std;
class shop{

    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) { counter=0;}
    void setprice(void);
    void displayprice();


};
void shop:: setprice(void){
    cout<<"enter id of your item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"price of item "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop:: displayprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"price of item "<<itemprice[i]<<endl;
    }
    
}

int main(){ 
shop dukan;
dukan.initcounter();
dukan.setprice();
dukan.displayprice();






return 0;
}