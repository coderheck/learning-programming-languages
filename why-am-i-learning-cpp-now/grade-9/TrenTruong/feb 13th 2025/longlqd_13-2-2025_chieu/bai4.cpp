#include <iostream>
#include <map>
using namespace std;
#define ll long long
ll k,n,c,res=0;string s;map<ll,ll>cnt;
int bitchsearch(int x, int k){
  int l=0,r=n-1,m,kq=-1;
  while(l<=r){
    m=l+(r-l)/2;
    if(cnt[m]-x>=k){kq=m;r=m-1;}else{l=m+1;}
  }
  return kq;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;cin>>s;
  cnt[0]=s[0];
  for(int i=1;i<n;i++){cnt[i]=cnt[i-1]+s[i];}
  c=bitchsearch(0, k);
  if(c!=-1){res+=(n-c);}
  for(int i=1;i<n;i++){
    c=bitchsearch(cnt[i-1],k);
    if(c!=-1){res+=(n-c);}
  }
  cout << res;
}