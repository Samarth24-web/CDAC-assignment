#include<iostream>
using namespace std;

template<class T>
class A{
    T a , b;

    public :
    A(T a , T b){
        this->a=a;
        this->b=b;
    }

    void display(){
        cout<<a<<endl<<b;
    }
};

int main(){
    A <int> a(10 , 11);
    a.display();
}