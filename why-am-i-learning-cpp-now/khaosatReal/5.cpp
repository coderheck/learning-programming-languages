#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i=2;i<=n/2;i++)
        if (n % i == 0){return false;}
    return true;
}
long long daochuso(long long arg){
    long long n=arg, tmp, retNum=0;
    while(n > 0){
        tmp = n % 10;
        retNum = retNum * 10 + tmp;
        n = n / 10;
    }
    return retNum;
}
int main(){
    long long a, b, so=0;
    cin>>a>>b;
    for (long long n=min(a, b); n<=max(a,b); n++){
        if(isPrime(n)==true && isPrime(daochuso(n))==true){so+=1;}
    }
    cout<<so;
    return 0;
}