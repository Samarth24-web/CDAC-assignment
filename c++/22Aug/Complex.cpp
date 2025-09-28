#include <iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    void accept();
    void display();
    void setReal(int);
    int getReal();
    void setImg(int);
    int getImg();
};

void Complex :: accept()
{
    cout<<"enter value for real and imaginary \n";
    cin >> real>> img;
}

void Complex :: display()
{
    cout<<"Complex number is "<<real<<"+"<<img<<"i"<<endl;
}
void Complex :: setReal(int r)
{
    real =r;
}
void Complex :: setImg(int i)
{
    img = i;
}
int Complex :: getReal()
{
     return real;
}
int Complex :: getImg()
{
    return img ;
}
int main(){
    Complex c1;
    c1.accept();
    c1.display();
    c1.setReal(10);
    c1.setImg(5);
    c1.display();
    cout<<"Real part is "<<c1.getReal();
}