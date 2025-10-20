#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i=2;i<=n/2;i++)
        if (n % i == 0){return false;}
    return true;
}
int main(){
    long long n;
    cin>>n;
    for(long long n1=n;n1>=n;n1++){if(isPrime(n1)==true){cout<<n1;break;}}
    return 0;
}