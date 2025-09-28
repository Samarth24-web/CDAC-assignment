#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int a =12;
    int b =0;
  try{
    if (b == 0)
            throw runtime_error("You have entered zero. Please enter another number.");
        int c = a / b;
        cout << c;
  }

  catch(runtime_error){
    cout<<"You have entered zero please enter another number";
}
cout<<"end";
}