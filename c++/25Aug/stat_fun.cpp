#include<iostream>
using namespace std;
class Complex
{
	public:
	static int cnt;

    public :
    static add(){
        int sum=0;
        for(int i=0; i<=cnt;i++){
            sum = sum +i;

        }
        cout<<"Addition is :"<<sum;
    }
};
int Complex::cnt=5;
int main()
{
	cout<<Complex::cnt<<endl;
    Complex :: add();
}