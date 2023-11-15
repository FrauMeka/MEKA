#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a= n/100000;
   int b=(n/10000)%10;
   int c=(n/1000)%10;
   int d=(n/100)%10;
   int e=(n/10)%10;
   int f=n%10;
   int first=a+b+c;
   int last=d+e+f;
   if(first==last){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
   return 0;
}