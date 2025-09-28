#include <iostream>
using namespace std;

class A{
    int x ;
    int y;

    public:
    A(){}
    A(int x , int y){
        this->x=x;
        this->y=y;
    }

    void display(){
        cout<<x<<"\t"<<y;
    }
};

int main(){
    A *a ;
    a= new A(4 , 5);
    a->display();
    return 0;
}