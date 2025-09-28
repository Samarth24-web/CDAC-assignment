#include <iostream>
using namespace std;

int main(){
     int n;//4
    cout<<"Enter number of rows"<<endl;
    cin>>n;
        int k =n;
    for(int i=1;i<=n;i++){

        for(int j=n;j>=i;j--){
              cout<<k;
        }
        k--;
        cout<<endl;
    }
}