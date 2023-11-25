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
    for(long long n1=3;n1<=n;n1++){
        for(long long n2=n1+1;n2<=n;n2++){
            if (isPrime(n1)==true and isPrime(n2)==true and n1 < n2){cout<<n1<<" "<<n2<<endl;break;}
        }continue;
    }
}
//yay