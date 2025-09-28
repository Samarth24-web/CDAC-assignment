#include <iostream>
using namespace std;

int main(){
     int n;//4
    cout<<"Enter number of rows"<<endl;
    cin>>n;

    for(int i =1;i<=n;i++){

        for(int j=1;j<=n-i;j++){

            cout<<"\t";
        }
        for(int k=1;k<=(i*2)-1;k++){
            cout<<k<<"\t";
        }
        cout<<endl;
    }
}