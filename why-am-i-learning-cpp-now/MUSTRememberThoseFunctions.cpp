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
long long digitsSum(long long arg){
    int n=arg,sum=0;
    while(n != 0) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}
bool isSquare(long long a){
    if (floor(sqrt(a))==sqrt(a) and ceil(sqrt(a))==sqrt(a)){return true;}else{return false;}
}
long long reverseDigits(long long arg){
    long long n=arg, tmp, retNum=0;
    while(n > 0){
        tmp = n % 10;
        retNum = retNum * 10 + tmp;
        n = n / 10;
    }
    cout << retNum;
}
int main(){
    return 0;
}