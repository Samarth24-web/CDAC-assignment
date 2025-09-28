#include<iostream>
using namespace std;

class A{

    int a=10;

    public:
    A(){
        cout<<"obj a"<<endl;
    }
     
     void display(){
        cout<<a<<endl;
    }

};

class B : virtual public A{

    int b=20;

    public:
    B(){
        cout<<"obj b"<<endl;
    }


};

class C : virtual public A{

    int b=20;

    public:
    C(){
        cout<<"obj c"<<endl;
    }


};

class D : public B , public C{

    int b=20;

    public:
    D(){
        cout<<"obj d"<<endl;
    }


};

int main(){
    D d;
    d.display();
}