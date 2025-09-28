#include<iostream>
using namespace std;

class A{
    int a=10;
    public:
    virtual void display(){
        cout<<a<<endl;
    }
};

class B : public A{
    int b=20;
    public:
    B(){
        cout<<"b"<<endl;
    }
    void display(){
        cout<<b<<endl;
    }

    void print(){
        cout<<b<<endl;
    }
};


int main(){
    A *a=new B;
    a->display();
    return 0;
}