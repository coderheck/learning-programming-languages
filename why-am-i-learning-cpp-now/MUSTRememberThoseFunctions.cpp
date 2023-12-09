#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    bool isprime=true;
    if(n<=1){isprime=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){isprime=false;}
    }
    return isprime;
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
    return retNum;
}
bool isPerfect(long long arg){
    long long sum=0;
    bool isperfect;
    for (long long i=1;i<arg;i++){
        if (arg%i==0){sum+=i;}
    }
    if(arg==sum){isperfect=true;}else{isperfect=false;}
    return isperfect;
}
int main(){
    return 0;
}