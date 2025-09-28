# include <iostream>   
//# include <stdexcept>

using namespace std;    

int main(){
    int a, b;
    cout<<"Enter numerator";
    cin>>a;
    cout<<"Enter denominator";
    cin>>b;

    try {
        if(b==0) {
           throw 0;

        }
        else{
            cout<<a/b<<endl;
        
        }
    }
    catch(...){
        cout<<"Denominator can't be zero"<<endl;

    }
    cout<<"end";
}
