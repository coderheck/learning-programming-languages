#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
struct ep{ll v,i;}a[100005];
bool cmpfn(const ep& a,const ep& b){
  if(a.v==b.v){
    return(a.i<b.i);
  }else{
    return(a.v<b.v);
  }
}
ll n,p,res=0;
ll bitchsearch(const ep& t){
  ll l=0,r=n-1,m,ans=0;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m].v-t.v>=p){
      ll lt=m,rt=n-1,best=m,mt;
      while(lt<=rt){
        mt=lt+(rt-lt)/2;
        if(a[mt].v==a[m].v){
          if(a[mt].i>t.i){
            best=mt;lt=mt+1;
          }
        }else{rt=mt-1;}
      }
      if(a[best].i>t.i){ans=max(ans,a[best].i-t.i);}
      r=m-1;
    }else{
      l=m+1;
    }
  }
  return ans;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>p;
  for(ll i=0;i<n;i++){cin>>a[i].v;a[i].i=i;}
  sort(a,a+n,cmpfn);
  for(ll i=0;i<n;i++){
    res=max(res,bitchsearch(a[i]));
  }
  cout<<res;
}
