
# include <iostream>
using namespace std;

class A{

public :
int * ptr;

A (){

    ptr = new int;
    *ptr = 20;
}

void display(){
    cout<<*ptr;
}
};

int main(){
    A a;
    a.display();
}