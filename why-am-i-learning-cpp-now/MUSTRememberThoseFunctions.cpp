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
  int sum=0;
  while(arg!=0){sum+=arg%10;arg/=10;}
  return sum;
}
bool isSquare(long long a){
  return (floor(sqrt(a)) == sqrt(a) && ceil(sqrt(a)) == sqrt(a));
}
long long reverseDigits(long long arg){
  long long rev=0;
  while(arg>0){rev*=10;rev+=arg%10;arg/=10;}
  return rev;
}
bool isPerfect(long long arg){
  long long sum=0;bool isperfect;
  for(long long i=1;i<=arg/2;i++){if(arg%i==0){sum+=i;}}
  return(arg==sum);
}
bool isPerfect_optimized(long long n){
  long long sum=0;
  for(long long i=1;i*i<=n;i++){
    if(n%i==0){
      sum+=i;
      long long j=n/i;
      if(j!=i){sum+=j;}
    }
  }
  return(n==sum-n);
}
long long gcd(long long a, long long b){
  return b == 0 ? a : gcd(b, a % b);
}
long long lcm(long long a, long long b){
  return (a/gcd(a,b))*b;
}
long long countDigits(long long arg){
  int c=0;
  while(arg>0){arg/=10;c++;}
  return c;
}
long double heron(long double a, long double b, long double c){
  long double s=(a+b+c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}
int BinarySearch(int a[],int l,int r,int x){
	if(r>=l){
		int m=l+(r-l)/2;
		if(a[m]==x){return m;}else{
			if(a[m]>x){
        return BinarySearch(a,l,m-1,x);
      }else{
				return BinarySearch(a,m+1,r,x);
			}
		}
	}else{return -1;}
}
long long countDivisors(long long n){
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
unsigned long long sumOfDivisors(unsigned long long n){
    unsigned long long sum=0;
    for(unsigned long long i=2;i*i<=n;i++){
        if(n%i==0){
          if(i==(n/i)){sum+=i;}else{sum+=(i+(n/i));}
        }
    }
	return (sum+1);
}
long long factorial(long long n){
  if(n==1){return 1;}else{return n*factorial(n-1);}
}
bool isPalindrome(std::string s){
  bool dx=true;
  for(int i=0;i<s.length()/2;i++){if(s[i]!=s[s.length()-i-1]){dx=false;break;}}
  return dx;
}
long long fastPow(long long x, unsigned long long y){
  long long ret=1;
  while(y>0){
    if(y&1){ret*=x;} // b & 1 == !(b % 2)
    y>>=1;x*=x;
  }
  return ret;
}
long long fastpowmod(long long a, unsigned long long b, long long c){
  long long res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;} // b & 1 == !(b % 2)
    b>>=1; a=(a*a)%c;  // b >>= 1 == b /= 2
  }
  return res;
}
#define ll long long
int main(){
  std::cout<<sumOfDivisors(220)<<" "<<sumOfDivisors(284);
}
