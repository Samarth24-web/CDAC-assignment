#include <iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
    int i; int factorial=1;
    for(i=1;i<=a;i++){
        factorial = factorial*i;
    }
    cout<<"factorial of number is :"<<factorial;
}