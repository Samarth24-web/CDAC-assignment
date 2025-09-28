#include <iostream>
using namespace std;

int main()
{
    int a[5] ;

cout<<"Enter the numbers "<<endl;
	for(int i=0 ; i<a.size(); i++){
		cin>>a[i];
	}
for( int i =0; i<a.size();i++){
    cout<<a[i]<<"\t";
}
cout<<(*a+0);
}
