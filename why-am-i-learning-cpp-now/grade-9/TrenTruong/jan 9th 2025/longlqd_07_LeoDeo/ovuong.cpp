#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll n,m;
int main(){
  cin>>n>>m;
  ll gc=gcd(n,m);
  cout<<gc<<"\n"<<n/gc<<" "<<m/gc;
}