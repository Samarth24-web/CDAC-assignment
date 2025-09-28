#include <iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter first num: "<<endl;
    cin>>a;
    cout<<"Enter second num: "<<endl;
    cin>>b;

    cout<<"values before swap"<<endl;
    cout<<"a: "<<a <<"\t"  <<"b: "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"values after swap"<<endl;
    cout<<"a: "<<a<<"\t" <<"b: "<<b<<endl;


}