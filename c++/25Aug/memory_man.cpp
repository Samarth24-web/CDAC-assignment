#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value "<<endl;
    cin>>n;

    int *ptr =new int[n];
    for(int i =0;i<n;i++){
        cin>>ptr [i];
    }
    cout<<"Displaying elements :"<<endl;
     for(int i =0;i<n;i++){
        cout<<ptr [i]<<endl;
    }
    delete []ptr;
     cout<<"Displaying elements :"<<endl;
     for(int i =0;i<n;i++){
        cout<<ptr [i]<<endl;
    }
}