#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,m,resVal=1000000007,resC=0;umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){cin>>m;cnt[m]++;}
  for(umap<ll,ll>::iterator it=cnt.begin();it!=cnt.end();it++){
    if(it->second>=resC&&it->first<resVal){resVal=it->first;resC=it->second;}
  }
  cout<<resVal<<" "<<resC;
}
