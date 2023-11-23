#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i=2;i<=n/2;i++)
        if (n % i == 0){return false;}
    return true;
}
long long digitsSum(long long arg){
    int n, sum; n=arg;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    return 0;
}