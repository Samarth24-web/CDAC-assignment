#include <iostream>
using namespace std;

int main(){
    int num;
    int pow;
    cout<<"Enter number and power"<<endl;
    cin>>num >>pow;
    int ans=1;
    for (int i=1;i<=pow;i++){
         ans = ans*num;
    }
    cout<<"Answer is "<<ans;
}