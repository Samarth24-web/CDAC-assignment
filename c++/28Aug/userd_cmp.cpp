#include <iostream>
using namespace std;

int main(){
    char str1[10], str2[10];
    cout<< "Enter two strings";
    cin>>str1>>str2;
       int i=0;
       bool ans= true;
    while(*(str1+i)!='\0' || *(str2+i)!='\0'){
 
        if(*(str1+i)!=*(str2+i)){
                ans = false;
                break;
        }
        i++;



    }
         cout<<ans;
}