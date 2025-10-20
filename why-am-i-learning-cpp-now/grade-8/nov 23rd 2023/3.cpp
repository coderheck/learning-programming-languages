#include <iostream>
#include <cmath>
using namespace std;

long long CubedDigitsSum(long long arg){
    int n,sum;n=arg;sum=0;
    while(n != 0) {
        sum += pow(n%10, 3);
        n /= 10;
    }
    return sum;
}
long long digitsSum(long long arg){
    int n,sum;n=arg;sum=0;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i=2;i<=n/2;i++)
        if (n % i == 0){return false;}
    return true;
}
int main(){
    int n, cds, ds;
    cin>>n;
    cds=CubedDigitsSum(n);
    cout<<cds;
    if (isPrime(digitsSum(n))==true and isPrime(n)==true){cout<<" "<<1;}else{cout<<" "<<0;}
    return 0;
}