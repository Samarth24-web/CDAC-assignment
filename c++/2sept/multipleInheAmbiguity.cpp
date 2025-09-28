# include <iostream>
using namespace std;
class A{
    public:
    int a = 10;
    void display(){
        cout<<a<<endl;
    }

};
class B {
    public:
    float b = 10.4;
    void display(){
        cout<<b<<endl;
    }
};
class C : public A, public B{
    int c = 22;
};

int main(){
    C c;
  //  c.display();  error due to ambiguity
    // to overcome ambiguity problem

    c.A::display();

    c.B::display();
}
