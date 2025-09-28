#include <iostream>
using namespace std;



int main(){
    int matrix1[3][3]={1,2,3,4,5,6,7,8,9};
    int matrix2[3][3]={1,2,3,4,5,6,7,8,9};
    int AddMatrix[3][3];

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            ans[i][j]=a1[i][j]+a2[i][j];
        }
    }
     for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
}
