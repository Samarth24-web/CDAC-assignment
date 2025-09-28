#include  <iostream>
using namespace std;
class A{
public:
void add();
int add(int a,int b);
int add(int a, int b, int c);
float add(float a, float b);
};
void A :: add(){
    int x=10;
    int y=20;
    cout<<x+y<<endl;
}
int  A:: add(int p, int q){
    return p+q;

}
int  A:: add(int p, int q, int r){
    return p+q+r;

}
float  A:: add(float p, float q){
    return p+q;

}
int main(){
   A a;
   a.add();
  cout<<a.add(2,3)<<endl;
   cout<<a.add(5,6,9)<<endl;
   cout<<a.add(5.2f,9.7f);

}