
# include <iostream>
using namespace std;

class Demo{
    int a=10;
    protected :
    int b = 20;

    public :
    int c =55;

    friend void sum(Demo&);

};

void sum(Demo& obj){
    
    int d =obj.a+obj.b+obj.c;
    cout<<"Addition is "<<d;
}
int main(){
    Demo d1;
    sum(d1);
}

