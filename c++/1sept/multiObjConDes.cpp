 #include <iostream>
using namespace std;
class Test {
public:
     Test() { cout << " Constructor executed"<<endl;
    cout<<this<<endl; }
 
    ~Test() { cout << " Destructor executed"<<endl;
        cout<<this<<endl;
     }
};
 main()
{
    // Create multiple objects of the Test class
    Test t, t1, t2, t3;
}