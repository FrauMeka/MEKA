#include <iostream> 
//lalala
using namespace std;
int main()
{
   int a,b,n;
   cin>>a>>b>>n;
   int overall=n*(a*100+b);
   int som= overall/100;
   int tiyin= overall%100;
   cout<<som<<"som"<<" "<<"and"<<" "<<tiyin<<"tyiyn";
}