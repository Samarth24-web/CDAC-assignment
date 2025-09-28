#include <iostream>
using namespace std;

 void swapByValue(int p , int q){
    int temp;
    temp=p;
    p=q;
    q=temp;
}
 void swapByRef(int& p , int& q){
    int temp;
    temp=p;
    p=q;
    q=temp;
}
 void swapByAdd(int * p , int * q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

int main(){
    int a=10;
    int b=20;

    cout<<"Passing by value\n";
    cout<<"before swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    swapByValue(a , b);
    cout<<"after swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Passing by value\n";
    cout<<"before swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    swapByAdd(&a , &b);
    cout<<"after swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Passing by value\n";
    cout<<"before swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    swapByValue(a , b);
    cout<<"after swapping\n";
    cout<<"a: "<<a <<"\n"<<"b: "<<b<<endl;
    return 1;
}

