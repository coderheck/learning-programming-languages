#include <iostream>
#include <cmath>
using namespace std;
long long digitsSum(long long arg){
    int n,sum;n=arg;sum=0;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
bool isSquare(long long a){
    a=a;
    if (floor(sqrt(a))==sqrt(a) and ceil(sqrt(a))==sqrt(a)){return true;}else{return false;}
}
int main(){
    long long n;
    cin>>n;
    long long ds=digitsSum(n);
    long long sqrtres=sqrt(ds);
    if (isSquare(ds)==true){cout<<ds;}else{cout<<ds%11;}
}