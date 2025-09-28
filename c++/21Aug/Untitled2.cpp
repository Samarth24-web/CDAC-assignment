#include <iostream>
using namespace std;
int main(){
	int arr[5];
	int arr2D[3][2];
	
	for(int i=0 ; i<a.size(); i++){
		cin>>arr[i];
	}
	for(int i=0 ; i<3;i++){
		for(int j=0 ; j<2;j++){
			cin>>arr2D[i][j];
		}
	}
	
	cout<<"1D array output";
	
	for(int i=0 ; i<5; i++){
		cout<<arr[i];
	}
	cout<<endl;
	cout<<"\n 2D array output \n";
	for(int i=0 ; i<3;i++){
		for(int j=0 ; j<2;j++){
			cout<<arr2D[i][j];
		}
		cout<<endl;
	}
	
}
