#include <iostream>
#include <cmath>

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
    while(n!=0){sum+=n%10;n/=10;}
    return sum;
}
bool isSquare(long long a){
    bool s;
    if(floor(sqrt(a))==sqrt(a)&&ceil(sqrt(a))==sqrt(a)){s=true;}else{s=false;}
    return s;
}
long long reverseDigits(long long arg){
    long long n=arg,digit,rev=0;
    while(n>0){rev*=10;digit=n%10;rev+=digit;n/=10;}
    return rev;
}
bool isPerfect(long long arg){
    long long sum=0;bool isperfect;
    for (long long i=1;i<arg;i++){if(arg%i==0){sum+=i;}}
    if(arg==sum){isperfect=true;}else{isperfect=false;}
    return isperfect;
}
int gcd(int a, int b){
    int c=a,d=b;
    while(c!=d){if(c>d){c-=d;}else{d-=c;}}
    return c;
}
int countDigits(int a){
    int b=a,c=0;
    while(b>0){b/=10;c++;}
    return c;
}
int main(){
    int x; std::cin>>x;
    std::cout<<isPrime(2);
    return 0;
}