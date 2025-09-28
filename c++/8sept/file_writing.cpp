# include <iostream>
# include <fstream>
using namespace std;

int main(){

    ofstream my_File("new_file.txt");

   if(!my_File.is_open()){
    cout<<"error";
   }
   // writing in a file

   my_File <<"hi ..."<<endl;
   my_File << "writing in a new file "<<endl;

   cout<<"writing completed";

   // closing the file
   my_File.close();
}