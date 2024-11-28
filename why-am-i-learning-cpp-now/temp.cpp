#include"iostream"
using namespace std;
#define ll long long
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  return res;
}
bool millerTest(ll d,ll n){
	ll a=2+rand()%(n-4);
	ll x=fastpowmod(a,d,n);
	if(x==1||x==n-1)
	  return true;
	while(d!=n-1){
		x=(x*x)%n; d*=2;
		if(x==1)return false;
		if(x==n-1)return true;
	}
	return false;
}
bool isPrime(ll n){
  int k=4;
	if(n<=1||n==4)
    return false;
	if(n<=3)
    return true;
	ll d=n-1;
	while(d%2==0){d/=2;}
	for (int i=1;i<=k;i++)
		if(!millerTest(d,n))
			return false;
	return true;
}
int t;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	cin>>t;
	for(int i=1;i<=t;i++){
    ll a;cin>>a;
    (isPrime(a))?cout<<"YES\n":cout<<"NO\n";
  }
}
