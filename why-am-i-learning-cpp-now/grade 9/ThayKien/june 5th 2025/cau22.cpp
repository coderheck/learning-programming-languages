#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll demuoc(const ll &n){
  ll r=0;
  for(ll i=1;i*i<=n;i+=2){
    if(n%i==0){r+=1+(i!=n/i);}
  }
  return r;
}
ll n,a,oc=0,ec=0,odd[10005],eve[10005],res=0,resr=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    (a&1)?odd[oc++]=a:eve[ec++]=a;
  }
  sort(odd,odd+oc);sort(eve,eve+ec);
  for(ll i=0;i<oc;i++){
    ll u=demuoc(odd[i]);
    if(u>resr){resr=u;res=odd[i];}
    cout<<odd[i]<<" ";
  }
  for(ll i=0;i<ec;i++){
    ll u=demuoc(eve[i]);
    if(u>resr){resr=u;res=eve[i];}
    cout<<eve[i]<<" ";
  }
  cout<<"\n"<<res;
}
