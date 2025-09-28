#include<iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of cols. :"<<endl;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=n-i ; j>0 ; j--){
            cout<<"\t";
        }
        int x=65;
        for(int j=1 ; j<=(i*2)-1; j++){
            cout<<(char)(x+j-1)<<"\t";
        }
        cout<<endl;
    }
}