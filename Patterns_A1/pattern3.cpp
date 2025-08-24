#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number of rows :"<<endl;
  cin>>n;
  int arr[n*2];
  for(int i=0; i<n ; i++){
    for(int k=0 ; k<n-i-1 ;k ++){
      cout<<"\t";
    }
    int pre=1;
    for(int j=0 ; j<=i ; j++){
      if(j==0 || j==i){
        arr[j]=1;
      }else{
        int x=arr[j];
        arr[j]=arr[j]+pre;
        pre=x;
        cout<<"\t";
      }
      if(j==i){cout<<"\t";}
      cout<<arr[j];
      cout<<"\t";
    }
    cout<<endl;
  }
  return 0;
}