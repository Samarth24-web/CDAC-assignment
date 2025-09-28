#include <iostream>
using namespace std;

int main(){
   int n;
  cout<<"Enter number of array elements:\n";
    cin>>n;
    int a [n];
    cout<<"Enter array elements:\n";
    for (int i=0;i<n;i++){
     cin>>a[i];   
    }

    cout<<endl<<endl<<endl;
    
    int f=-1;
    int s=-1;

    for(int i=0 ; i<n ; i++){

        cout<<i<<"th itteration: "<<endl;
    
        if(a[i]>f){
            s=f;
            f=a[i];
            cout<<f<<endl;
            cout<<s<<endl;

        }
        if(s<a[i]<f){
            s=a[i];
            cout<<s<<endl;
        }
    
    }

    cout<<s;

}