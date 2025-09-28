#include <iostream>
using namespace std;
 void demo()
{
    static int count = 0;
    cout << count << " ";
     count++;
}
void sum();

 int main()
{
    for (int i = 0; i < 5; i++){
        demo();
        sum();
    }
    return 0;
}
 void sum()
{
    static int cnt = 0,sum=0;
     sum=sum+cnt;
     cout<<sum<<"\n";
     cnt++;
}
