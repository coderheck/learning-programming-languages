#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,k,a,s=0,r,res=0;
umap<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  cnt[0]=1;
  while(n--){
    cin>>a;
    s+=a;
    r=(s%k+k)%k;
    res+=cnt[r];
    cnt[r]++;
  }
  cout<<res;
}
