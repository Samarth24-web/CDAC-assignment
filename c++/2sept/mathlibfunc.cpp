# include <iostream>
# include <math.h>
using namespace std;

class A{
public:
int x= 100;
int base = 5;
int expo =3;
float c = 6.6;

int d = -11.7;
};


int main(){

    A a;
     // finding square root of given number
    cout<<"Square root is"<<sqrt(a.x)<<endl;
    
    // calculating power 
    cout<<"Power of the given number:"<<pow(a.base, a.expo)<<endl; 

      //using ceil function
      cout<<ceil(a.c)<<endl;

      // using floor function
      cout<<floor(a.c)<<endl;

      // round off
      cout<<round(a.c)<<endl;

      // absolute value func
      cout<<abs(a.d)<<endl;


}