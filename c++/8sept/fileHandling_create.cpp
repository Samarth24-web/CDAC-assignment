# include <iostream>
# include <fstream>

using namespace std;

int main(){


    ofstream my_File ("example.txt");

    if(!my_File){
        cout<<"Error.......";
    }
   
     my_File.close();
     cout<<"a";
}
