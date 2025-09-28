#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;

    int first = 0;
    int second = 1;
    if(num==1){
        cout<<first<<endl;
        return 0;
    }
     if(num==2){
        cout<<second<<endl;
        return 0;
    }

    cout<<first<<endl<<second<<endl;

    for(int i=3 ; i<=num ; i++){
        int temp=first;
        first=second;
        second=first+temp;
        cout<<second<<endl;
    }
    return 0;
}