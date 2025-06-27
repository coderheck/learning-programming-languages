#include"iostream"
#include"string"
#include"algorithm"
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
ll factorial(ll n){
  if(n==1){return 1;}else{return n*factorial(n-1);}
}
int main(){
  if(fopen("bonus4.inp","r")){
    freopen("bonus4.inp","r",stdin);
  }
  ll n,res=0;cin>>n;
  for(ll i=1;i<=n;i++){
    string s;ll y;cin>>s>>y;
    sort(s.begin(),s.end());
    ll x=factorial(s.length());
    for(ll j=0;j<s.length();j++){
      ll c=1;
      while(s[j+1]==s[j]){c++;j++;}
      x/=factorial(c);
    }
    res+=fastpowmod(y,x,2000019);
  }
  cout<<res%50000003;
}
