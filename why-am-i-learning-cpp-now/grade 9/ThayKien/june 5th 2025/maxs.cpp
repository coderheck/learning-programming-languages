#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,a[100005],curS=0,res=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  res=curS=a[0];
  for(ll i=1;i<n;i++){
    curS=max(curS+a[i],a[i]);
    res=max(res,curS);
  }
  cout<<res;
}
