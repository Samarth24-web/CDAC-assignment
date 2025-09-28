#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number "<<endl;
    cin>>a;
    int i;
    int count=0;
    if(a==2){
        cout<<a<<"is not a prime number";
        return 0;
    }
    for(i=2;i<a;i++){
        if(a%i==0){
            count=1;
            break;
        }
    
       
    }
    if(count!=0){
        cout<<a<<"is not a prime number";
    }else{
      cout<<a<<"is a prime number";
    }
    }
   
