#include"iostream"
using namespace std;
#define ll long long
ll a,b;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
void demuoc(ll n){
  ll res=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      res=res+1+(i!=n/i);
    }
  }
  cout<<res;
}
int main(){
  cin>>a>>b;
  demuoc(gcd(a,b));
}