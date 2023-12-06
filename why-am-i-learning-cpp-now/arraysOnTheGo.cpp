#include "iostream"
using namespace std;
bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i=2;i<=n/2;i++)
        if (n % i == 0){return false;}
    return true;
}
int main(){
    int n;
    cin >> n;
    int p[n];
    for (int i=0; i<n;i++) {
        cin >> p[i];
    }
    for (int i2=0;i2<=n;i2++){
        if(isPrime(p[i2])==true){cout<<p[i2]<<" ";}
    }
    return 0;
}