#include"iostream"
using namespace std;
void eratosthenes_sieve(bool arr[],long long n){
  for (int i=0;i<=n;i++){arr[i]=true;}
  arr[0]=arr[1]=false;
  for (int i=2;i*i<=n;i++){
    if (arr[i]){
      for (long long j=i*i;j<=n;j+=i){arr[j]=false;}
    }
  }
}
bool primes[1000000];
int main(){
  eratosthenes_sieve(primes,10000000);
  while(true){
    unsigned long long n;cin>>n;
    cout<<primes[n]<<"\n";
  }
}