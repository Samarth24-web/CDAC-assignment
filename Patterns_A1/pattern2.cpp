#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the no. of rows:"<<endl;
  cin>>n;
  cout<<endl;
  for(int i=n ; i>0 ; i--){
    for(int k=n ; k>i ; k-- ){
      cout<<"\t";
    }
    for(int j=1 ; j<=(i*2)-1 ; j++){
      cout<<"*"<<"\t";
    }
    cout<<endl;
  }
  return 0;
}