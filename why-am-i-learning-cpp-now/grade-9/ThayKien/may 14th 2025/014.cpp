#include<iostream>
#include<map>
using namespace std;
#define ll long long
#define fuckyou 1000000007
#define umap map
ll n,a,f=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>a;cnt[a]++;}
  for(umap<ll,ll>::iterator it=cnt.begin();it!=cnt.end();it++){
    if(it->second==1){cout<<it->first;return 0;}
  }
  cout<<-1;
}
