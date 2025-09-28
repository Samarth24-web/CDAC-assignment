#include <iostream>
using namespace std;

class Cdate
{
    int dd, mm, yy;
    public:
    void setDate(int dd , int mm , int yy);
    void getDate();
};

void Cdate:: setDate(int d , int m , int y){
    dd=d;
    mm=m;
    yy=y;
}

void Cdate::getDate(){
    cout<<"date: \t"<<dd<<"/"<<mm<<"/"<<yy<<"\n";
}


int main(){
    Cdate date;
    date.setDate(11, 12 , 22);
    date.getDate();
return 0;
}


