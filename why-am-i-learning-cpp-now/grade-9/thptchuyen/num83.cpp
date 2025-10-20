#include<iostream>
using namespace std;
#define ll long long
#define maxA 5000000
ll calcPlace(const ll &a){return a/3+a/8-a/24;}
ll t,k;
void solve(){
  ll l=1,r=3*k,res=r,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(calcPlace(m)>=k){
      res=m;r=m-1;
    }else{
      l=m+1;
    }
  }
  cout<<res<<"\n";
}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){cin>>k;solve();}
}
