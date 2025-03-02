#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number();
};
void student :: set_roll_number(int r){
    roll_number =r;

}
void student :: get_roll_number(){
    cout<<"the roll is"<<roll_number<<endl;
}
class exam: public student{
    protected :
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);
};
void exam :: set_marks(float m1, float m2){
maths= m1;
physics = m2;
}
void exam:: get_marks(){
    cout<<"the marks obtained in physics are:"<<physics<<endl;
    cout<<"the marks obtained in maths are:"<<maths<<endl;

}
class result: public exam{
    float percentage;
    public:
    void display(){
        cout<<" your percentage is"<<(maths+physics)/2<<"%"<<endl;

    }

};
int main(){
result harry;
harry.set_roll_number(420);
harry.set_marks(99,91);
harry.display();


    return 0;
}