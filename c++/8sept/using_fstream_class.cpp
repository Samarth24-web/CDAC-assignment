# include <iostream>
# include <fstream>

using namespace std;

int main(){

    fstream file1 ("example.txt", ios::out);

   if(!file1){
    cout<<"error";

   }
   cout<<"opened successfully";

   file1<<"Hello"<<endl;
   file1<<"good afternoon"<<endl;
   file1<<"............"<<endl;
   file1.close();
   cout<<"closing......"<<endl;

     string line;
    file1.open("example.txt", ios::in);
   while(!file1.eof()){

    getline(file1, line);
    cout<<line<<endl;

   }
   file1.close();

  file1.open("example.txt", ios::app);

   file1<<"with existing data"<<endl;
   file1<<"my file"<<endl;

   file1.close();

   cout<<"end";


   
}