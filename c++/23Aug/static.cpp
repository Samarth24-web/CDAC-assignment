#include <iostream>
using namespace std;
void show();
int main(){
    static int x=20;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    show();
    show();
    show();

}
void show(){
    static int a=22;
    
    a++;
    cout<<a<<endl;

}