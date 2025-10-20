#include<iostream>
using namespace std;
#define ll long long
ll n,q,a[100005],s[100005],l,r;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  s[0]=0;
  cin>>n>>q;
  for(ll i=1;i<=n;i++){cin>>a[i];s[i]=s[i-1]+a[i];}
  while(q--){
    cin>>l>>r;
    cout<<s[r]-s[l-1]<<"\n";
  }
}
