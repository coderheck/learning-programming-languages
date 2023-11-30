#include <iostream>
#include "cmath"
using namespace std;

bool isPrime(long long n){
    if (n <= 1){return false;}else{
        for (int i=2;i<=n/2;i++){
            if (n % i == 0){return false;}else{return true;}
        }
    }
}
int main(){
    long long a, b;

    return 0;
}