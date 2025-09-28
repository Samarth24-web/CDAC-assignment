#include <iostream>
using namespace std;
class A {

    public:
    int x = 10;
    private:
    int y = 30;

    protected:
    int z = 22;
  
};
class base1 : public A{
    public:
    int j=55;

 
    
} ;
class base2 : protected A{
    public:
    int j=55;

 
    
} ;
class base3 : private A{
    public:
    int k=55;

 
    
} ;

int main(){

   base1 b1;
   base3 b3;
   cout<<b1.x<<endl;
   cout<<b1.y<<endl;
   cout<<b1.z<<endl;
   cout<<b3.x<<endl;

   base2 b2;
  // cout<<b2.x<<endl;  .........x became protected

   A a;
   cout<<a.x<<endl;
    //cout<<a.y<<endl;
     //cout<<a.z<<endl;





  }
