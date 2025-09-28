#include <iostream>
using namespace std;

class A{
    public:
    int x=50;
};
class B : public A{
    public:
    int y=55;
};
class C {
    public:
    int z=155;
};
class D : public B,C{
    public:
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
};
int main(){
    D d;
    

    d.display();
}