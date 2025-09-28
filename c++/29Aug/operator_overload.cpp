# include <iostream>
using namespace std;

class A {
   public:
    int a;

   public:
   A(){

   }
   A(int a){
    this->a=a;

   }

   public:
   A operator +(A x );
   A operator -(A c);
   void display(){
    cout<<a<<endl;
   }

   A* operator *(){
    return this;
   }

   A operator --(){
    a--;
    return *this;
   }
    A operator --(int x){
     A temp=*this;   
    a--;
    return temp;
   }

};

A A :: operator +(A x ){
    A temp;
    temp.a=a+x.a;
    return temp;
}
A A :: operator -(A b  ){
     A temp;
     temp.a =a-b.a;
     return temp;
 }
int main(){
 A a(10);
 A b(20);

 A c = a+b;  //a.operator+(b);
 c.display();
 A obj = a-b;
 obj.display();
 A *d = *a;
 d->a;
 d->display();

 A e=--a;
 e.display();

 A f= a--;
 f.display();


}