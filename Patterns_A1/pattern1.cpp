#include<iostream>
using namespace std;

int main(){
  int n ;
  cout<<"Enter the number if rows: "<<endl;
  cin>>n;
  for(int i=1 ; i<=n ; i++){
    for(int k=n-i; k>0 ; k--){
        cout<<"\t";
      }
    int x=i-1;
    for(int j=1 ; j<=(i*2)-1 ; j++){
      if(j<=i){
        x++;
      }else{
        x--;
      }
      cout<<x;
      cout<<"\t";
    }
    cout<<endl;
  }
  return 0;
}