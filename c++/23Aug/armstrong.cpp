#include <iostream>
using namespace std;
void find_armstrong(int a);
int main(){
    int a;
    cout<<"Enter number"<<endl;
    cin>>a;
    find_armstrong(a);
}

void find_armstrong(int a){
    int x = a;
    int ans = 0;
    while(a!=0){
        int rem=a%10;
        ans+=(rem*rem*rem);
        a/=10;
    }
    if(x==ans){
        cout<<x<<" is a armstrong number";
    }
    else{
        cout<<x<<" is not a armstrong number";
    }
}