#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct crow{ll a,b;}a[100005];
bool cmpfn(const crow &a,const crow &b){
  return(a.b==b.b)?(a.a>b.a):(a.b<b.b);
}
ll n,m,c=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=0;i<n;i++){cin>>a[i].a;}
  for(ll i=0;i<n;i++){cin>>a[i].b;}
  sort(a,a+n,cmpfn);
  for(ll i=0;i<n;i++){
    if(m>=a[i].b-a[i].a){m+=a[i].a;}
  }
  cout<<m;
}
