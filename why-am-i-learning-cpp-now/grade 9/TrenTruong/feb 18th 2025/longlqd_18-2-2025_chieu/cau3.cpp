#include"iostream"
using namespace std;
#define ll long long
ll max(ll a,ll b){return(a>b)?a:b;}
ll min(ll a,ll b){return(a<b)?a:b;}
ll l,r,mind=1000000000,res=0,t1=0,t2=0,d=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>l>>r;
  for(ll m=l;m<=r;m++){
    t1=(l+m)*(m-l+1)/2;t2=(m+1+r)*(r-m)/2;
    // cout<<m<<": "<<t1<<"-"<<t2<<"\n";
    d=max(t1,t2)-min(t1,t2);
    if(d<mind){mind=d;res=m;}
    if(t1>t2){cout<<res;return 0;}
  }
}