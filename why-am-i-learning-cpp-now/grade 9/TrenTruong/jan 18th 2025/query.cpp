#include"iostream"
using namespace std;
#define ll long long
int n,q;ll a[100005];
struct ass{int o,s,e;ll x;}z[100005];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>q;
  for(int i=1;i<=n;i++){cin>>a[i];}
  for(int i=1;i<=q;i++){
    cin>>z[i].o;
    if(z[i].o==1){cin>>z[i].s>>z[i].e>>z[i].x;}
    if(z[i].o==2){cin>>z[i].s>>z[i].e;}
  }
  for(int i=1;i<=q;i++){
    if(z[i].o==1){
      for(int j=z[i].s;j<=z[i].e;j++){a[j]+=z[i].x;}
    }
    if(z[i].o==2){
      unsigned ll res=0;
      for(int j=z[i].s;j<=z[i].e;j++){res+=a[j];}
      cout<<res<<"\n";
    }
  }
}