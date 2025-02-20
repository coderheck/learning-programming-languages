#include"iostream"
#include"unordered_map"
#include"cmath"
using namespace std;
#define umapii unordered_map<int,int>
#define ll long long
ll fastpow(ll a,ll b){
  ll res=1;if(b==0){return 1;}
  while(b>0){
    if(b&1){res*=a;}
    a*=a;b>>=1;
  }
  return res;
}
int n,k,a[100005];ll res=0;umapii cnt;
ll powBase(ll &n){
  ll root=round(pow(n,1.0/k));
  if(fastpow(root,k)==n){return root;}
  return -1;
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
  for(umapii::iterator i=cnt.begin();i!=cnt.end();i++){
    for(umapii::iterator j=i;j!=cnt.end();j++){
      ll p=1LL*i->first*j->first;
      ll b=powBase(p);
      if(b!=-1){
        if(i==j){
          res+=(i->second*(i->second-1))/2;
        }else{
          res+=i->second*j->second;
        }
      }
    }
  }
  cout<<res;
}