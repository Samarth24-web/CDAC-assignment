#include<iostream>
using namespace std;

int main(){
    int r , t , a;
    cout<<"Enter amout:"<<endl;
    cin>>a;
    cout<<"Enter Interest rate: "<<endl;
    cin>>r;
    cout<<"Enter Time Duration: "<<endl;
    cin>>t;


    float  finalAmount=a;

    for(int i=0 ; i<t ; i++){
        float interest=(finalAmount*r)/100;
        finalAmount+=interest;
    }

    cout<<"Final Amount is: "<<finalAmount;
    
}
