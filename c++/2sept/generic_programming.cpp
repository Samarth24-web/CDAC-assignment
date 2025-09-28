# include <iostream>
using namespace std;

template <class X>
X substract (X a, X b){
    X c =a-b;
    return c;
}
template <class X, class Y>
Y substract (X a, Y b){
     Y c =a-b;
    return c;
}

int main(){
    
    cout<<"Substraction of integer:"<<substract(8,7)<<endl;
   cout<<"Substraction of floating value:"<<substract(7.3f,9.8f)<<endl;
   cout<<"character:"<<substract('Z','A')<<endl;

   cout<<"Substraction of integer:"<<substract(8,7.7f)<<endl;
   cout<<"Substraction of floating value:"<<substract(7.3d,9.8f)<<endl;
   cout<<"character:"<<substract(155,'A');
}