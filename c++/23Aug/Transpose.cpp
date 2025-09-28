#include <iostream>
using namespace std;
void multiply(int *a1,  int *ans);
int main(){
    int a1[4][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int ans[4][4];

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            ans[j][i]=a1[i][j];
        }
    }

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }


}
