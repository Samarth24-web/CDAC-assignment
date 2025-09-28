# include <iostream>
using namespace std;

namespace my_namespace{

double d =30.45;
void display(){
    cout<<d<<endl;
}
}
namespace another{

    char ch = 'A';
    void show(){
        cout<<ch<<endl;
    }
}
using namespace my_namespace;
int main(){

    another:: show();
    display();
}