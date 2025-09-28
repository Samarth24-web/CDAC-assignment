#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
      int ch =n+64;
    for(int i=1;i<=n;i++){
        
        for(int j=n;j>=i;j--){
            cout<<(char)ch;

        }
         ch--;
        cout<<endl;
    }
}