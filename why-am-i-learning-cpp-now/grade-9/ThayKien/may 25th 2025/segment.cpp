#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll min(const ll &a,const ll &b){return(a<b)?a:b;}
ll n,k,a[100005],res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll l=0;l<n;l++){
    ll maxA=a[l],minA=a[l];
    for(ll r=l;r<n;r++){
      maxA=max(maxA,a[r]);minA=min(minA,a[r]);
      if(maxA-minA>k){break;}else{res++;}
    }
  }
  cout<<res;
}
