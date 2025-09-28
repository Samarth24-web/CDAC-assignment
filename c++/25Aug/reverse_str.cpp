#include <iostream>
#include<string.h>
using namespace std;

int main(){
    cout<<"Enter string:"<<endl;
    char str[50];
    cin>>str;
    int n=strlen(str);
    for(int i=0 ; i<n/2 ; i++){
        char temp=*(str+i);
        *(str+i)=*(str+n-1-i);
        *(str+n-1-i)=temp;
    }
    cout<<str;
}