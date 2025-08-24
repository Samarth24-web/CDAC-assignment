#include <iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter the no. of rows: "<<endl;
  cin>>n;

  for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n-i ; j++){
      cout<<"\t";
    }
    char ch=(char)(65+i);
    for(int k=0 ;k<(i*2)+1 ; k++){
      char c=(char)(ch+k);
      cout<<c;
      cout<<"\t";
    }
    cout<<endl;
  }
  return 0;
}