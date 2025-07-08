#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
struct pookie{ll x,y,z;}a[100005];
// umap<ll,ll>x,y,z;
ll n,k,v,b,d,c=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i].x>>a[i].y>>a[i].z;}
  while(k--){
    c=0;
    cin>>v>>b>>d;
    for(ll i=0;i<n;i++){
      c+=(
        a[i].x>v ||
        a[i].x==v&&a[i].y>b ||
        a[i].x==v&&a[i].y==b&&a[i].z>=d
      );
    }
    cout<<c<<"\n";
  }
}
