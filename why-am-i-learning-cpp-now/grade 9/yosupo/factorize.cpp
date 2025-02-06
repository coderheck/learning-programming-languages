#include"iostream"
#include"vector"
using namespace std;
#define ll long long
#define maxN 1000000000
vector<ll>primes;
bool mark[maxN+5];
void printFormattedSieve(){
  for(ll i=2;i<=maxN;i++){mark[i]=true;}
  mark[0]=mark[1]=false;
  for(ll i=2;i*i<=maxN;i++){
    if(mark[i]){
      primes.push_back(i);
      for(ll j=i*i;j<=maxN;j+=i){mark[j]=false;}
    }
  }
  cout<<"{";
  for(auto i:primes){cout<<i<<", ";}
  cout<<"}";
}
int main(){
  freopen("factorize.out","w",stdout);
  printFormattedSieve();
}