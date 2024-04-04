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
long long gcd(long long a,long long b){
  if(b==0){return a;}else{return gcd(b,a%b);}
}
long long lcm(long long a, long long b){
  return std::abs(a/gcd(a,b)*b);
}
int countDigits(int a){
    int b=a,c=0;
    while(b>0){b/=10;c++;}
    return c;
}
float heron(int a, int b, int c){
    float s=(a+b+c)/2.0; // chia cho 2.0 moi dc 🤯
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
#include"algorithm"
int timkiemnhiphan(int a[],int l,int r,int x){
    std::sort(a,a+r);
    if(r>=l){
        int m=l+(r-l)/2;
        if(a[m]==x){return m;}else{
            if(a[m]>x){return timkiemnhiphan(a,l,m-1,x);}else{
                return timkiemnhiphan(a,m+1,r,x);
            }
        }
    }else{return -1;}
}
long long demuoc(long long n){
  long long d=0;
  for(long long i=1;i*i<=n;i++){
    if(n%i==0){
      d++;
      long long j=n/i;
      if(j!=i){d++;}
    }
  }
  return d;
}
unsigned long long tonguoc(unsigned long long n){
    unsigned long long t=0;
    for(unsigned long long i=1;i*i<=n;i++){
        if(n%i==0){
            t+=i;
	        unsigned long long j=n/i;
	        if(j!=i){t+=j;}
        }
    }
	return t;
}
long long giaithua(long long n){
    if(n==1){return 1;}else{return n*giaithua(n-1);}
}
int main(){
    int x,y;std::cin>>x>>y;
    std::cout<<lcm(x,y);
}
