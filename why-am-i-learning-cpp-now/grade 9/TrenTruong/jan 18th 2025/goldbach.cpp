#include"iostream"
using namespace std;
#define maxP 1000000
#define ll long long
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
bool ispr(ll n){
  if(n>maxP){
    for(ll i=2;i*i<=n;i++){
      if(n%i==0){return false;}
    }
    return true;
  }else{return !pr[n];}
}
ll k;
void solve(){
  for(ll i=2;i<=maxP;i++){
    if(ispr(i)&&ispr(k-i)){
      cout<<i<<" "<<k-i<<"\n";
      return;
    }
  }
  cout<<"NO\n";
}
int n;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  cin>>n;
  while(n--){
    cin>>k;
    solve();
  }
}