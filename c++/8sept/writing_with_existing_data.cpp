# include <iostream>
# include <fstream>

using namespace std;

int main(){

    ofstream myfile("new_file.txt" ,ios :: app);

    if (!myfile){
        cout<<"Error";
    }
    else{
        cout<<"opened successfully";
    }

    myfile <<"Writing without loosing previous data"<<endl;
    myfile <<"This is new line"<<endl;
    myfile <<"--------------";

    myfile.close();

    cout<<"completed";

}