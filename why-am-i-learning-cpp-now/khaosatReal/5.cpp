#include "bits/stdc++.h"
using namespace std;

bool isPrime(long long n){
    if (n <= 1){return false;}else{
        for (int i=2;i<=n/2;i++){
            if (n % i == 0){return false;}else{return true;}
        }
    }
}
long long daochuso(long long arg){
    long long n=arg, tmp, retNum=0;
    while(n > 0){
        tmp = n % 10;
        retNum = retNum * 10 + tmp;
        n = n / 10;
    }
    cout << retNum;
}

int main(){
    long long a, b;
    for (long long n=min(a, b); n<=max(a,b); n++){
        if(isPrime(n)==true){}
    }
    return 0;
}