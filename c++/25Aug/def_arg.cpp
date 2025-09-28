#include <iostream>
using namespace std;
void display(char = '*', int = 30);

void func(int a, bool flag = true)
{
		if (flag == true ) 
		{
			cout<< "Flag is true. a = " << a;
      	        }
		else
		{
			cout<< "Flag is false. a = " << a;
        	}
}
int main() {
    int count = 80;
    cout << "No argument passed: ";
    display(); 
      cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', count); 

	func(200, false);
}
void display(char c, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}



