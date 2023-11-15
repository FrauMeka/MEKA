#include <iostream>

//the best
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    for(int i=0; i<n;++i){
        int num;
        cout<<i+1;
        cin>>num;
        if(num%2==0){
            even++;
        }
        else{
            odd++;
        }

    }
    cout<<even<<endl;
    cout<<odd<<endl;
    return 0;
}