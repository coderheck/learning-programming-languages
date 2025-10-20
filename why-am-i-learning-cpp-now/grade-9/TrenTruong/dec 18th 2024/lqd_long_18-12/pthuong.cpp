#include"iostream"
#include"algorithm"
#include"string"
using namespace std;
#define ll long long
#define maxN 1000000
ll n;
int main(){
  cin>>n;
  ll m=n/2-(!(n&1));
  cout<<m*(n-m-1);
}