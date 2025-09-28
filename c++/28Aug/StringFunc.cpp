#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main(){
     char str1[]="Hello";
     char str2[]="World";
     char str3[100];

     // to concatinate String 

     cout<<"Length of String :"<< strlen(str1)<<endl;
     cout<<"concatinaton of String :"<< strcat(str1 , str2)<<endl;
     cout<<str1 <<endl<<str2<<endl;
     cout<<"copying string" <<strcpy(str2 , str1)<<endl;
     cout<<str2 <<endl;
    // cout<<"reversing the String"<< str1.reverse();
     cout<<"comparing two String"<< strcmp(str1,str2)<<endl;
     cout<<"comparing two String"<< strchr(str1,'l');
     
}