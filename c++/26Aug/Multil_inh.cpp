#include <iostream>
using namespace std;

class Animal{
    public:
    int a = 11;
};


class Ab : public Animal{

    public:
    int b = 15;

   
};
class B : public Ab{
    public:
    int c = 21;

     void display(){
        cout<<"value of a from Super parent class:"<<a<<endl;
        cout<<"value of a from parent class:"<<b<<endl;
        cout<<"value of a from child class:"<<c<<endl;

    }
};

int main(){
    B bobj;
    bobj.display();
}