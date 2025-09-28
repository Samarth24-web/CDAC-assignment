#include <iostream>
using namespace std;
void find_str(char *str, char ch){
    int i = 0;
    int max = -1;
    while(*(str+i)!='\0'){

        if (*(str+i)==ch){
            max=i;
        }
          i++;
    }
    if (max ==-1)
    return;
    while(*(str+max)!='\0'){
        cout<<*(str+max);
        max++;
    }

}
int main(){
    char str[100] , ch;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"Enter character from which you want to print string"<<endl;
    cin>>ch;

    find_str(str, ch);

 
}
