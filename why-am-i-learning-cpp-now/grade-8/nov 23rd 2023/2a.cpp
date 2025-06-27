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
    for(long long m=1;m<=n;m++){
        if(isPrime(m)==true){cout<<m<<" ";}
    }
}