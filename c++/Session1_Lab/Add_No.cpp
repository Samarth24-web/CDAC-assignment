#include <iostream>
using namespace std;

// int* convertToBinary(int num){
//     int* str=new int [32];
//     int i=0;
//     while(num>0){
//         int a=num/2;
//         num=num/2;
//         str[i]=a;
//     }
//     return str;
// }

// int* addBinary(int [] a , int[] b ){
//     int* ans=new int[32];
//     int carry=0;

//     for(int i=0 ; i<32 ; i++){
//         int x=a[i]+b[i];
//         if(x<=1){
//             ans[i]=x;
//             carry=0;
//         }else if(x==2){
//             ans[i]=0;
//             carry=1;
//         }else if(x==3){
//             ans[i]=1;
//             carry=1;
//         }

//     }
//     return ans;
// }

//  int convertBinaryToDecimal(int[] ans){
//     int sol=0;
//     for(int i=0 ; i<32 ; i++){
//         if(ans[i]==1){
//             sol+=getPow(i+1);
//         }
//     }
//     return sol;
//  }

//  int getPow(int n){
//     int ans=1;
//     for(int i=0 ; i<n ; i++){
//         ans*=2;
//     }
//     return ans;
//  }

int addBinary(int  a, int b) {
   int pro=1;
   int ans=0;
   int carry=0;
   while(a!=0 || b!=0){
    int x=a%10;
    a/=10;
    int y=b%10;
    b/=10;
    if(x>1 || y>1) return -1;
    int sum=x+y+carry;
    if(sum>1){
        sum=sum%2;
        carry=1;
    }else{
      carry=0;
    }
    ans+=(pro*sum);
    pro*=10;
   }
   if(carry==1){
    ans+=pro;
   }
   return ans;
}

int main()
{
   cout<<"Enter two numbers :"<<endl;
   int a, b;
   cin>>a>>b;

   cout<<"Sum of two decimal numbers: "<< a+b<<endl;

    int m ,n;
    cout << "Enter first binary number: ";
    cin >> m;
    cout << "Enter second binary number: ";
    cin >> n;

    int sum = addBinary(m ,n);
    cout << "Sum = " << sum << endl;

   char x , y;
   cout<<"Enter two character"<<endl;
   cin>>x >>y;
   cout<<"sum of two characters: "<<x+y;
}

