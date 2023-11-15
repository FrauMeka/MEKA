#include <iostream>
//mr
using namespace std;
bool isprime(int num){
    if (num <=1){
        return false;
    }
    for(int i=2; i*i<=num;++i){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int nextprime(int n){
    int nnum=n+1;
    while(!isprime(nnum)){
        nnum++;
    }
    return nnum;
}
int main(){
    int n;
    cin>>n;
    int nnextprime=nextprime(n);
    cout<<nnextprime<<endl;
    return 0;
}