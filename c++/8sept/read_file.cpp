# include <iostream>
# include <fstream>
using namespace std;

int main(){

    ifstream myFile ("example.txt");

    if(!myFile){
        cout<<"error....";
    }
    else{
        cout<<"opened successfully";
    }

    string myData;
    while(!myFile.eof()){

        getline(myFile, myData);
        cout<<myData<<endl;
    }
      cout<<"file reading completed"<<endl;

      myFile.close();
       cout<<"file closed";
}