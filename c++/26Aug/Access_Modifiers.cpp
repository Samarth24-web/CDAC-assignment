#include <iostream>
using namespace std;
class A {

    public:
    int x = 10;
    private:
    int y = 30;

    protected:
    int z = 22;

    public :
void display(){
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
}
  
};
class base : public A{
    public:
    int j=55;

    public:
    int getz(){
        return z;
    }
} ;
int main(){

   base bobj;
   cout<<"value of x:"<<bobj.x<<endl;
   cout<<"value of j:"<<bobj.j<<endl;
   cout<<bobj.getz()<<endl;
}
