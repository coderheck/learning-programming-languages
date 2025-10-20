#include<iostream>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll n,a,prs=0,amax=-1,cnt[1000005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>n;
  while(n--){cin>>a;prs+=(!pr[a]);cnt[a]++;if(amax<a){amax=a;}}
  cout<<prs<<"\n";
  for(ll i=1;i<=amax+1;i++){if(!cnt[i]){cout<<i;return 0;}}
}