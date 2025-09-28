#include <iostream>
using namespace std;

class A{
    public:
    int a=10;
};

class B{
    public:
    int b=20;
};

class C : public A , B{
    public:
    int c=30;

    public :
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
};

int main(){
    C c;
    c.display();
}