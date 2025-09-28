#include<iostream>
using namespace std;

int main(){
    int num , pow;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    cout<<"Enter Power: "<<endl;
    cin>>pow;
    int ans=1;
    if(pow!=0){
         for(int i=0 ; i<pow ; i++){
        ans*=num;
    }
    }
   

    cout<<"Power of number is:"<<ans;
}