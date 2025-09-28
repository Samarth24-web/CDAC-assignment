#include <iostream>
using namespace std;
void multiply(int *a1, int *a2, int *ans);
int main(){
    int a1[3][3]= {5,8,5,9,3,1,1,7,4}; 
    int a2[3][3]={1,2,3,4,5,6,7,8,9};
    int ans[3][3];
    
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            int x=0;
            for(int k=0 ; k<3;k++){
                x+=a1[i][k]*a2[k][j];
            }
            ans[i][j]=x;
        }
    }
     for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
}


