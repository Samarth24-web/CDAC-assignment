#include <iostream>
using namespace std;

class A{
    public:
    int *x;

    public:
    A(){
        x=new int;
        *x=10;
    }

    int* getVal(){
        return x;
    }

    ~A(){
        if(x){
            delete[] x;
        }
    }

    A(A &a){
        x=new int;
        *x= * a.x; 
    }

void operator=(A & a){
    if(x){
            delete[] x;
        }
        x=new int;
        *x=* a.x; 
}


};

int main(){

    A * a = new A();
    int * temp=a->getVal();
    cout<< * temp<<endl;
    cout<<*a->x;

}