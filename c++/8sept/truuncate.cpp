# include <iostream>
# include <fstream>

using namespace std;
int main(){

  fstream file2;
  file2.open("abc.txt", ios::out | ios ::trunc);

  if(!file2){
    cout<<"error";
  }

    cout<<"Successful";
}