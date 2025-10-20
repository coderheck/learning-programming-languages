#include"iostream"
#include"vector"
using namespace std;
#define ll long long
ll k;
vector<ll>b1;unsigned ll c1=0,c1Num=1;
ll rev(ll n){
  ll ret=0;
  while(n!=0){ret*=10;ret+=n%10;n/=10;}
  return ret;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  if(fopen("bai05.inp","r")){
    freopen("bai05.inp","r",stdin);
    freopen("bai05.out","w",stdout);
  }
  cin>>k;
  ll ans2=(k/4+k)*2-1;
  if(ans2%5==0){ans2+=2;}
  ll ans1=10;
  k--;
  k%=81;
  int save=10;
  while(k--){
    ans1=rev(save)+2;
    save=ans1;
  }
  cout<<ans1<<"\n"<<ans2;
}
