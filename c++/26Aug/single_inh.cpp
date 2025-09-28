#include <iostream>
using namespace std;

class Animal{
    public:
    int a = 11;
};


class Ab : public Animal{

    public:
    int b = 15;

    void display(){
        cout<<"value of a from parent class:"<<a<<endl;
        cout<<"value of a from child class:"<<b;
    }
};
int main(){
    Ab aobj;
    aobj.display();
}