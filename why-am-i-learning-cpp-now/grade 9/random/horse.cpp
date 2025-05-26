#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
bool cmpfn(const ll &a,const ll &b){return(a>b);}
ll n,a[100005],b[100005],res=0,bi=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n);sort(b,b+n);
  for(ll ai=0;ai<n;ai++){
    if(a[ai]>b[bi]){res++;bi++;}
    if(bi==n){break;}
  }
  cout<<res;
}
