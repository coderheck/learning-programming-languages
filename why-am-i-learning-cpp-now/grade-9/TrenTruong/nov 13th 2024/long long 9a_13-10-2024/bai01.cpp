#include"iostream"
using namespace std;
#define ll long long
ll l,r,a,b;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
void subtask1(){
  ll lc=lcm(a,b);
  ll res=0;
  for(ll i=l;i<=r;i++){
    if(i%a==0&&i%b==0){res++;}
  }
  cout<<res<<"\n";
}
void fullSubtask(){
  ll lc=lcm(a,b);
  ll llc=l/lc,rlc=r/lc;
  cout<<rlc-llc<<"\n";
}
int main(){
  if(fopen("bai01.inp","r")){
    freopen("bai01.inp","r",stdin);
    freopen("bai01.out","w",stdout);
  }
  cin>>l>>r>>a>>b;
  fullSubtask();
}