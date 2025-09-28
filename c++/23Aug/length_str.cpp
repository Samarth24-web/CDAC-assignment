#include <iostream>
using namespace std;
# include <string.h>

int findLen(char *str){
    int len=0;
    while(*str!='\0'){
        len++;
        *str++;
    }
    return len;
}

void copy(char *str1 ,char *str2){
    while(*str1!='\0'){
        *str2=*str1;
        *str2++;
        *str1++;
    }
    *str2='\0';
}

void concat(char *str1 ,char *str2){
    while(*str1!='\0'){
        *str1++;
    }
    while(*str2!='\0'){
        *str1=*str2;
        *str1++;
        *str2++;
    }
    *str1='\0';
}
int main(){
    char str1[25] ;
    cout<<"Enter string"<<endl;
    cin>>str1;

    int len=findLen(str1);
    cout<<"Length of string is :"<<len<<endl; 

    char strCpy[125];
    copy(str1 , strCpy);
    cout<<"cpying str1 :"<<strCpy<<endl;

    char str2[25] ;
    cout<<"Enter string"<<endl;
    cin>>str2;
    concat(str1 , str2);

    cout<<"concatinated String is:"<<str1;
    

 
}