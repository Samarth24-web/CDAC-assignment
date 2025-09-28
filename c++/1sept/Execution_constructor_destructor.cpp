#include <iostream>
using namespace std;

class A{
    public:
   int x ;


    public:
A (){
    cout<<"Constructor executed"<<endl;
}

~A(){
cout<<"destructor executed"<<endl;
}
};

int main(){

    A *a = new A();
    delete a;
    

}