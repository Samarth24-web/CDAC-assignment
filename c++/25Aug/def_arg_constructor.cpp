#include <iostream>
using namespace std;
class def_arg_constr {
public:
    int sum ;
    
    A(int a, int x = 0) 
    {
        sum = a + x;
    }
    void print() { cout << "Sum =" << sum << endl; }
};
int main()
{
   
    def_arg_constr obj1(15, 2);
    def_arg_constr obj2(3);
    obj1.print();
    obj2.print();
    return 0;
}
