#include <iostream>
#include <math.h>
void fastscan(int &number){
    // variable to indicate sign of input number
    bool negative = false;
    register int c;
    number = 0;
    // extract current character from buffer
    c = getchar();
    if (c=='-'){
        // number is negative
        negative = true;
        // extract the next character from the buffer
        c = getchar();
    }
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0' (48) to '9' (57)
    for (; (c>47 && c<58); c=getchar()){number = number *10 + c - 48;}
    if (negative){number *= -1;}
}
void countSort(int array[], int size) {
  int output[10], count[10], max = array[0];
  // find max
  for (int i=1; i<size; i++) {
    if(array[i]>max){max=array[i];}
  }
  // init array with zeroes
  for (int i=0; i<=max; i++) {
    count[i]=0;
  }
  // count each element
  for (int i=0; i<size; i++) {
    count[array[i]]++;
  }
  // total count of each array
  for (int i=1; i<=max; i++) {
    count[i]+=count[i - 1];
  }
  for (int i=size-1; i>=0; i--) {
    output[count[array[i]]-1]=array[i];
    count[array[i]]--;
  }
  // replace given array
  for (int i = 0; i < size; i++) {
    array[i]=output[i];
  }
}
void eratosthenes_sieve(bool arr[],unsigned long long n){
  // init prime table
  for (int i=0;i<=n;i++){arr[i]=true;}
  // 0 and 1 arent primes
  arr[0]=arr[1]=false;
  // if i is not a prime then all its multiples are not primes
  for (int i=2;i*i<=n;i++){
    if (arr[i]){
      for (unsigned long long j=i*i;j<=n;j+=i){arr[j]=false;}
    }
  }
}
#include <vector>
std::vector<int> dijkstraPrimeAlgorithm(int numberOfPrimes){ // this requires the vector library, also this isnt complete
  std::vector <int> primes = {2}, Q; int x=1, limit=4;
  auto is_prime=[&](int x){
    bool p=true;
    for(int k=2;k<=Q.size();k++){
      if(x>Q[k])
        Q[k]+=primes[k];
      if(x==Q[k])
        p=false;
    }
    return p;
  };
  while(primes.size()<numberOfPrimes){
    do{
      x+=2;
      if(x>=limit){
        Q[Q.size()],limit=limit,primes[Q.size()+1]*primes[Q.size()+1];
      }
    }while(!is_prime(x));
    primes.push_back(x);
  }
  return primes;
}
#include"sstream"
int ExtractIntegersFromString(std::string str){
  std::stringstream ss; ss<<str;
  std::string tmp; int found, ret=0;
  while(!ss.eof()){
    ss>>tmp;
    if(std::stringstream(tmp)>>found){ret*=10;ret+=found;}
    tmp="";
  }
  return ret;
}
void popbackLL(long long &n){
  long long r=0,n1=n,n2=0;
  while(n1!=0){n2*=10;n2+=n1%10;n1/=10;}
  while(n2>10){r*=10;r+=n2%10;n2/=10;}
  n=r;
}
void PrintPrimeFactors(long long n){
  while(n%2==0){std::cout<<2<<" ";n/=2;}
  for(long long i=3;i*i<=n;i=i+2){
    while(n%i==0){
      std::cout<<i<<" ";
      n/=i;
    }
  }
  if(n>2)std::cout<<n<<" ";
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
long long factmod(long long n, long long p) {
  vector<int>f(p);
  f[0] = 1;
  for (int i = 1; i < p; i++)
    f[i] = f[i-1] * i % p;
  int res = 1;
  while (n > 1) {
    if ((n/p) % 2)
      res = p - res;
    res = res * f[n%p] % p;
    n /= p;
  }
  return res;
}
long long getMax(std::vector<long long>arr, long long n){
  long long mx=arr[0];
  for(long long i=1;i<n;i++){
    if(arr[i]>mx){mx=arr[i];}
  }
  return mx;
}
void countSortExp(std::vector<long long>&arr, long long n, long long exp){
  long long output[n];
  long long i,count[10]={0};
  for(i=0;i<n;i++){count[(arr[i]/exp)%10]++;}
  for(i=1;i<10;i++){count[i]+=count[i-1];}
  for(i=n-1;i>=0;i--){
    output[count[(arr[i]/exp)%10]-1]=arr[i];
    count[(arr[i]/exp)%10]--;
  }
  for(i=0;i<n;i++){arr[i]=output[i];}
}
void parallelCountSort(std::vector<long long>&arr, long long n){
  long long m=getMax(arr,n);
  for(long long exp=1;m/exp>0;exp*=10){
    for(long long i=0;i<n;i++){countSortExp(arr,n,exp);}
  }
}
std::vector<int>SumOfDivisorsSieve(){
  int maxN=1000000;
  vector<int>sumdiv(maxN+1,0);
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumdiv[j]+=i;}
  }
}

using namespace std;
int main(){
  PrintPrimeFactors(2354353454);
}
